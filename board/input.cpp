#include "input.h"
#include "ui_input.h"
#include "mainwindow.h"
#include <QMessageBox>

input::input(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::input)
{
    ui->setupUi(this);
    this->host = nullptr;
    this->n1 = nullptr;
    this->n2 = nullptr;
}

input::~input()
{
    delete ui;
}

void input::on_pushButton_clicked()
{
    this->host = ui->textEdit->toPlainText();
    this->n1 = ui->textEdit_2->toPlainText();
    this->n2 = ui->textEdit_3->toPlainText();
    emit inputReady(this->host.toUtf8().constData(), this->n1.toInt(), this->n2.toInt());
    this->close();
 }

std::string input::getHostname()
{
    return this->host.toUtf8().constData(); //return some Data. In this Case a QString
}

int input::getN1()
{
    return this->n1.toInt(); //return some Data. In this Case a QString
}

int input::getN2()
{
    return this->n2.toInt(); //return some Data. In this Case a QString
}
