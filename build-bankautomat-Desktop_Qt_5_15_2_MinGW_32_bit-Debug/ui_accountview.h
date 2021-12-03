/********************************************************************************
** Form generated from reading UI file 'accountview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTVIEW_H
#define UI_ACCOUNTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accountview
{
public:
    QPushButton *btnLogout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnGetBalance;
    QPushButton *btnGetActions;
    QPushButton *btnWithdraw;

    void setupUi(QWidget *accountview)
    {
        if (accountview->objectName().isEmpty())
            accountview->setObjectName(QString::fromUtf8("accountview"));
        accountview->resize(875, 618);
        btnLogout = new QPushButton(accountview);
        btnLogout->setObjectName(QString::fromUtf8("btnLogout"));
        btnLogout->setGeometry(QRect(690, 80, 141, 41));
        QFont font;
        font.setPointSize(14);
        btnLogout->setFont(font);
        widget = new QWidget(accountview);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(340, 270, 210, 127));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnGetBalance = new QPushButton(widget);
        btnGetBalance->setObjectName(QString::fromUtf8("btnGetBalance"));
        btnGetBalance->setFont(font);

        verticalLayout->addWidget(btnGetBalance);

        btnGetActions = new QPushButton(widget);
        btnGetActions->setObjectName(QString::fromUtf8("btnGetActions"));
        btnGetActions->setFont(font);

        verticalLayout->addWidget(btnGetActions);

        btnWithdraw = new QPushButton(widget);
        btnWithdraw->setObjectName(QString::fromUtf8("btnWithdraw"));
        btnWithdraw->setFont(font);

        verticalLayout->addWidget(btnWithdraw);


        retranslateUi(accountview);

        QMetaObject::connectSlotsByName(accountview);
    } // setupUi

    void retranslateUi(QWidget *accountview)
    {
        accountview->setWindowTitle(QCoreApplication::translate("accountview", "Form", nullptr));
        btnLogout->setText(QCoreApplication::translate("accountview", "Kirjaudu ulos", nullptr));
        btnGetBalance->setText(QCoreApplication::translate("accountview", "N\303\244yt\303\244 saldo", nullptr));
        btnGetActions->setText(QCoreApplication::translate("accountview", "Selaa tilitapahtumia", nullptr));
        btnWithdraw->setText(QCoreApplication::translate("accountview", "Nosta rahaa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class accountview: public Ui_accountview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTVIEW_H
