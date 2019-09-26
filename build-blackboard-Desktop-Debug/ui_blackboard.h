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
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label;
    QLabel *label_2;
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
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 100, 101, 32));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(140, 40, 101, 21));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(140, 70, 101, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 40, 61, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 70, 57, 16));
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
        pushButton->setText(QCoreApplication::translate("BlackBoard", "Enviar", nullptr));
        label->setText(QCoreApplication::translate("BlackBoard", "Hostname", nullptr));
        label_2->setText(QCoreApplication::translate("BlackBoard", "Porta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlackBoard: public Ui_BlackBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLACKBOARD_H
