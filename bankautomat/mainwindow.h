#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //void on_btnGetAsiakas_clicked();
    //void getAsiakasSlot (QNetworkReply *reply);
    void loginSlot (QNetworkReply *reply);
    void on_btnLogin_clicked();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QNetworkAccessManager *postManager;
    QByteArray response_data;
};
#endif // MAINWINDOW_H

