#ifndef ACCOUNTVIEW_H
#define ACCOUNTVIEW_H

#include <QWidget>
#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>

namespace Ui {
class accountview;
}

class accountview : public QWidget
{
    Q_OBJECT

public:
    explicit accountview(QWidget *parent = nullptr);
    ~accountview();
    QString currentAccount;
    void getInfo(QString cardnumber);
private slots:
    void on_btnGetBalance_clicked();
    void getBalanceSlot (QNetworkReply *reply);
    void on_btnLogout_clicked();
    void getInfoSlot (QNetworkReply *reply);

private:
    Ui::accountview *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QNetworkAccessManager *postManager;
};

#endif // ACCOUNTVIEW_H
