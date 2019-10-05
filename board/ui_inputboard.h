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

    void setupUi(QDialog *InputBoard)
    {
        if (InputBoard->objectName().isEmpty())
            InputBoard->setObjectName(QString::fromUtf8("InputBoard"));
        InputBoard->resize(400, 300);
        label = new QLabel(InputBoard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 90, 71, 16));
        label_2 = new QLabel(InputBoard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 110, 71, 16));
        textEdit = new QTextEdit(InputBoard);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(170, 90, 104, 21));
        textEdit_2 = new QTextEdit(InputBoard);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(170, 110, 104, 21));
        pushButton = new QPushButton(InputBoard);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 140, 90, 32));

        retranslateUi(InputBoard);

        QMetaObject::connectSlotsByName(InputBoard);
    } // setupUi

    void retranslateUi(QDialog *InputBoard)
    {
        InputBoard->setWindowTitle(QCoreApplication::translate("InputBoard", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("InputBoard", "Hostname:", nullptr));
        label_2->setText(QCoreApplication::translate("InputBoard", "Quadro:", nullptr));
        pushButton->setText(QCoreApplication::translate("InputBoard", "Entrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputBoard: public Ui_InputBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTBOARD_H
