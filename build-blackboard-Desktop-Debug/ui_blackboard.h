/********************************************************************************
** Form generated from reading UI file 'blackboard.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLACKBOARD_H
#define UI_BLACKBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlackBoard
{
public:
    QWidget *centralWidget;
    QWidget *loginWidget;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BlackBoard)
    {
        if (BlackBoard->objectName().isEmpty())
            BlackBoard->setObjectName(QString::fromUtf8("BlackBoard"));
        BlackBoard->resize(400, 300);
        centralWidget = new QWidget(BlackBoard);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        loginWidget = new QWidget(centralWidget);
        loginWidget->setObjectName(QString::fromUtf8("loginWidget"));
        loginWidget->setGeometry(QRect(79, 34, 241, 162));
        loginWidget->setMaximumSize(QSize(241, 162));
        textEdit = new QTextEdit(loginWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(80, 10, 151, 31));
        textEdit_2 = new QTextEdit(loginWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(80, 50, 151, 31));
        textEdit_2->setMinimumSize(QSize(150, 0));
        label = new QLabel(loginWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 61, 16));
        label_2 = new QLabel(loginWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 61, 20));
        pushButton = new QPushButton(loginWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 130, 223, 29));
        label_3 = new QLabel(loginWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 90, 61, 20));
        textEdit_3 = new QTextEdit(loginWidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(80, 90, 151, 31));
        textEdit_3->setMinimumSize(QSize(150, 0));
        BlackBoard->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BlackBoard);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 28));
        BlackBoard->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BlackBoard);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BlackBoard->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BlackBoard);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BlackBoard->setStatusBar(statusBar);

        retranslateUi(BlackBoard);

        QMetaObject::connectSlotsByName(BlackBoard);
    } // setupUi

    void retranslateUi(QMainWindow *BlackBoard)
    {
        BlackBoard->setWindowTitle(QCoreApplication::translate("BlackBoard", "BlackBoard", nullptr));
        label->setText(QCoreApplication::translate("BlackBoard", "Hostname", nullptr));
        label_2->setText(QCoreApplication::translate("BlackBoard", "N1", nullptr));
        pushButton->setText(QCoreApplication::translate("BlackBoard", "Enviar", nullptr));
        label_3->setText(QCoreApplication::translate("BlackBoard", "N2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlackBoard: public Ui_BlackBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLACKBOARD_H
