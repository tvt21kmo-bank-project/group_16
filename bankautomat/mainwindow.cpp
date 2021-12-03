#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "accountview.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loginSlot (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();

    if(response_data == "true")
    {
        accountview *av = new accountview;
        av->show();
        qDebug()<<"Kirjautuminen onnistui";
    }
}

void MainWindow::on_btnLogin_clicked()
{
    QJsonObject json;
    json.insert("korttinumero",ui->lineCard->text());
    json.insert("pin",ui->linePin->text());

    QString site_url="http://localhost:3000/login";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    postManager = new QNetworkAccessManager(this);
    connect(postManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(loginSlot(QNetworkReply*)));

    reply = postManager->post(request, QJsonDocument(json).toJson());
}

/*
void MainWindow::on_btnGetAsiakas_clicked()
{
    QString site_url="http://localhost:3000/asiakas";
    QString credentials="netuser:netpass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(getAsiakasSlot(QNetworkReply*)));
    reply = manager->get(request);
}

void MainWindow::getAsiakasSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString asiakas;
    foreach (const QJsonValue &value, json_array)
    {
    QJsonObject json_obj = value.toObject();
    asiakas+=QString::number(json_obj["idAsiakas"].toInt())+","+json_obj["etunimi"].toString()+","+json_obj["sukunimi"].toString()+","+json_obj["osoite"].toString()+","+json_obj["puhnro"].toString()+"\r";
    }
    qDebug()<<asiakas;
    ui->txtAsiakas->setText(asiakas);
    reply->deleteLater();
    manager->deleteLater();
}
*/








