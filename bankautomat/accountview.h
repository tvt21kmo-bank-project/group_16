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

private slots:
    void on_btnGetBalance_clicked();
    void getBalanceSlot (QNetworkReply *reply);

private:
    Ui::accountview *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
};

#endif // ACCOUNTVIEW_H
