#include "accountview.h"
#include "ui_accountview.h"
#include "mainwindow.h"

accountview::accountview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::accountview)
{
    ui->setupUi(this);
}

accountview::~accountview()
{
    delete ui;
}

void accountview::on_btnGetBalance_clicked()
{
    qDebug()<<currentAccount;
    QString site_url="http://localhost:3000/tili/"+currentAccount;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(getBalanceSlot(QNetworkReply*)));
    reply = manager->get(request);
}

void accountview::getBalanceSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString balance;
    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        balance+=QString::number(json_obj["saldo"].toDouble());
    }
    qDebug()<<balance;
    reply->deleteLater();
    manager->deleteLater();
}
