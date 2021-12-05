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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accountview
{
public:
    QPushButton *btnLogout;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnGetBalance;
    QPushButton *btnGetActions;
    QPushButton *btnWithdraw;
    QLabel *labelWelcome;

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
        layoutWidget = new QWidget(accountview);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 250, 210, 127));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnGetBalance = new QPushButton(layoutWidget);
        btnGetBalance->setObjectName(QString::fromUtf8("btnGetBalance"));
        btnGetBalance->setFont(font);

        verticalLayout->addWidget(btnGetBalance);

        btnGetActions = new QPushButton(layoutWidget);
        btnGetActions->setObjectName(QString::fromUtf8("btnGetActions"));
        btnGetActions->setFont(font);

        verticalLayout->addWidget(btnGetActions);

        btnWithdraw = new QPushButton(layoutWidget);
        btnWithdraw->setObjectName(QString::fromUtf8("btnWithdraw"));
        btnWithdraw->setFont(font);

        verticalLayout->addWidget(btnWithdraw);

        labelWelcome = new QLabel(accountview);
        labelWelcome->setObjectName(QString::fromUtf8("labelWelcome"));
        labelWelcome->setGeometry(QRect(10, 170, 861, 41));
        QFont font1;
        font1.setPointSize(16);
        labelWelcome->setFont(font1);
        labelWelcome->setAlignment(Qt::AlignCenter);

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
        labelWelcome->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class accountview: public Ui_accountview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTVIEW_H
