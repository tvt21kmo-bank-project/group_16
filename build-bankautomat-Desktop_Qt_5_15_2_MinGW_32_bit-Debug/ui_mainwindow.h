/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnLogin;
    QLineEdit *lineCard;
    QLineEdit *linePin;
    QLabel *labelCard;
    QLabel *labelPin;
    QLabel *labelErrorMessage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(310, 270, 131, 61));
        QFont font;
        font.setPointSize(14);
        btnLogin->setFont(font);
        lineCard = new QLineEdit(centralwidget);
        lineCard->setObjectName(QString::fromUtf8("lineCard"));
        lineCard->setGeometry(QRect(320, 180, 113, 24));
        linePin = new QLineEdit(centralwidget);
        linePin->setObjectName(QString::fromUtf8("linePin"));
        linePin->setGeometry(QRect(320, 220, 113, 24));
        QFont font1;
        font1.setStrikeOut(false);
        linePin->setFont(font1);
        linePin->setFrame(true);
        linePin->setEchoMode(QLineEdit::Password);
        labelCard = new QLabel(centralwidget);
        labelCard->setObjectName(QString::fromUtf8("labelCard"));
        labelCard->setGeometry(QRect(240, 180, 81, 20));
        labelPin = new QLabel(centralwidget);
        labelPin->setObjectName(QString::fromUtf8("labelPin"));
        labelPin->setGeometry(QRect(290, 220, 21, 21));
        labelErrorMessage = new QLabel(centralwidget);
        labelErrorMessage->setObjectName(QString::fromUtf8("labelErrorMessage"));
        labelErrorMessage->setGeometry(QRect(260, 250, 231, 20));
        QFont font2;
        font2.setPointSize(10);
        labelErrorMessage->setFont(font2);
        labelErrorMessage->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Kirjaudu", nullptr));
        labelCard->setText(QCoreApplication::translate("MainWindow", "Korttinumero", nullptr));
        labelPin->setText(QCoreApplication::translate("MainWindow", "PIN", nullptr));
        labelErrorMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
