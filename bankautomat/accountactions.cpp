#include "accountactions.h"
#include "ui_accountactions.h"
#include "accountview.h"

accountactions::accountactions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::accountactions)
{
    ui->setupUi(this);

    timerSeconds = 0;
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this,SLOT(doTimerSlot()));
    timer->start(1000);
}

accountactions::~accountactions()
{
    delete ui;
}

void accountactions::closeEvent(QCloseEvent *event)
{
    av->startTimer();
}

void accountactions::getActions(QString currentAccount)
{
    qDebug()<<currentAccount;
    QString site_url="http://localhost:3000/tilitapahtumat/"+currentAccount;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(getActionsSlot(QNetworkReply*)));
    reply = manager->get(request);
}

void accountactions::getActionsSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    qDebug()<<response_data;

    for(int i = json_array.count()-1; i > -1; i--)
    {
        QJsonObject json_obj = json_array[i].toObject();
        //ui->labelActions->setText(json_obj["aika"].toString()+", "+json_obj["tapahtuma"].toString()+", "+json_obj["summa"].toString()+"€");
        //array[i]=json_obj["aika"].toString()+", "+json_obj["tapahtuma"].toString()+", "+json_obj["summa"].toString()+"€";
        ui->listActions->addItem(json_obj["aika"].toString()+", "+json_obj["tapahtuma"].toString()+", "+QString::number(json_obj["summa"].toDouble())+"€");
    }

    reply->deleteLater();
    manager->deleteLater();
}

void accountactions::on_btnClose_clicked()
{
    timer->stop();
    timerSeconds = 0;
    close();
}

void accountactions::doTimerSlot()
{
    timerSeconds++;
    qDebug()<<"Sekunteja: "+QString::number(timerSeconds);

    if(timerSeconds >= 10)
    {
        timer->stop();
        close();
    }
}

void accountactions::getBalance(QString currentAccount)
{
    qDebug()<<currentAccount;
    QString site_url="http://localhost:3000/tili/"+currentAccount;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    manager2 = new QNetworkAccessManager(this);
    connect(manager2, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(getBalanceSlot(QNetworkReply*)));
    reply2 = manager2->get(request);
}

void accountactions::getBalanceSlot(QNetworkReply *reply2)
{
    QByteArray response_data=reply2->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    qDebug()<<response_data;
    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        ui->labelBalance->setText("Tilin saldo: "+QString::number(json_obj["saldo"].toDouble())+"€");
        qDebug()<<"Balance";

    }
    reply2->deleteLater();
    manager2->deleteLater();
}

void accountactions::getInfo(QString currentAccount)
{
    qDebug()<<currentAccount;
    QString site_url="http://localhost:3000/asiakas/"+currentAccount;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    manager3 = new QNetworkAccessManager(this);
    connect(manager3, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(getInfoSlot(QNetworkReply*)));
    reply3 = manager3->get(request);
}

void accountactions::getInfoSlot(QNetworkReply *reply3)
{
    QByteArray response_data=reply3->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    qDebug()<<response_data;
    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        ui->labelAccountInfo->setText(json_obj["etunimi"].toString()+"\n"+json_obj["sukunimi"].toString()+"\n"+json_obj["osoite"].toString()+"\n"+json_obj["puhnro"].toString());

    }
    reply3->deleteLater();
    manager3->deleteLater();
}
