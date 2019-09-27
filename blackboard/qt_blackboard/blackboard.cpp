#include "blackboard.h"
#include "ui_blackboard.h"
#include <QMessageBox>

BlackBoard::BlackBoard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BlackBoard)
{
    ui->setupUi(this);
    this->host = nullptr;
}

BlackBoard::~BlackBoard()
{
    delete ui;
}

void BlackBoard::on_pushButton_clicked()
{
    this->host = ui->textEdit->toPlainText();
    this->n1 = ui->textEdit_2->toPlainText();
    this->n2 = ui->textEdit_3->toPlainText();
    ui->loginWidget->hide();
}

std::string BlackBoard::getHostname()
{
    return this->host.toUtf8().constData(); //return some Data. In this Case a QString
}

int BlackBoard::getN1()
{
    return this->n1.toInt(); //return some Data. In this Case a QString
}

int BlackBoard::getN2()
{
    return this->n2.toInt(); //return some Data. In this Case a QString
}
