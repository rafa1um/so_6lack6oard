/********************************************************************************
** Form generated from reading UI file 'inputboard.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTBOARD_H
#define UI_INPUTBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_InputBoard
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *InputBoard)
    {
        if (InputBoard->objectName().isEmpty())
            InputBoard->setObjectName(QString::fromUtf8("InputBoard"));
        InputBoard->resize(400, 300);
        InputBoard->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label = new QLabel(InputBoard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 90, 71, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"color: rgb(255, 170, 255);"));
        label_2 = new QLabel(InputBoard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 110, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 255);\n"
"color: rgb(85, 255, 255);"));
        textEdit = new QTextEdit(InputBoard);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(170, 90, 104, 21));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 127);"));
        textEdit_2 = new QTextEdit(InputBoard);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(170, 110, 104, 21));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        pushButton = new QPushButton(InputBoard);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 140, 90, 32));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(InputBoard);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 16, 51));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 255);"));
        label_4 = new QLabel(InputBoard);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 20, 21, 51));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 127);"));
        label_5 = new QLabel(InputBoard);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 10, 21, 51));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 255);"));
        label_6 = new QLabel(InputBoard);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(120, 10, 16, 51));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(170, 85, 255);"));
        label_7 = new QLabel(InputBoard);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(140, 20, 21, 51));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 255);\n"
"color: rgb(0, 255, 127);"));
        label_8 = new QLabel(InputBoard);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(80, 20, 31, 51));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(InputBoard);

        QMetaObject::connectSlotsByName(InputBoard);
    } // setupUi

    void retranslateUi(QDialog *InputBoard)
    {
        InputBoard->setWindowTitle(QCoreApplication::translate("InputBoard", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("InputBoard", "Hostname:", nullptr));
        label_2->setText(QCoreApplication::translate("InputBoard", "Quadro:", nullptr));
        pushButton->setText(QCoreApplication::translate("InputBoard", "Entrar", nullptr));
        label_3->setText(QCoreApplication::translate("InputBoard", "Bubble Gum Board", nullptr));
        label_4->setText(QCoreApplication::translate("InputBoard", "bb", nullptr));
        label_5->setText(QCoreApplication::translate("InputBoard", "le", nullptr));
        label_6->setText(QCoreApplication::translate("InputBoard", "Bo", nullptr));
        label_7->setText(QCoreApplication::translate("InputBoard", "ard", nullptr));
        label_8->setText(QCoreApplication::translate("InputBoard", "gum", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputBoard: public Ui_InputBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTBOARD_H
