/********************************************************************************
** Form generated from reading UI file 'input.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_H
#define UI_INPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_input
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QPushButton *pushButton;

    void setupUi(QDialog *input)
    {
        if (input->objectName().isEmpty())
            input->setObjectName(QString::fromUtf8("input"));
        input->resize(400, 300);
        label = new QLabel(input);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 90, 71, 16));
        label_2 = new QLabel(input);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 110, 71, 16));
        label_3 = new QLabel(input);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 130, 71, 16));
        textEdit = new QTextEdit(input);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(170, 90, 104, 21));
        textEdit_2 = new QTextEdit(input);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(170, 110, 104, 21));
        textEdit_3 = new QTextEdit(input);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(170, 130, 104, 21));
        pushButton = new QPushButton(input);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 160, 90, 32));

        retranslateUi(input);

        QMetaObject::connectSlotsByName(input);
    } // setupUi

    void retranslateUi(QDialog *input)
    {
        input->setWindowTitle(QCoreApplication::translate("input", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("input", "Hostname:", nullptr));
        label_2->setText(QCoreApplication::translate("input", "N1:", nullptr));
        label_3->setText(QCoreApplication::translate("input", "N2:", nullptr));
        pushButton->setText(QCoreApplication::translate("input", "Enviar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class input: public Ui_input {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT_H
