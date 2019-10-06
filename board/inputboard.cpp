#include "inputboard.h"
#include "ui_inputboard.h"

InputBoard::InputBoard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputBoard)
{
    ui->setupUi(this);
}

InputBoard::~InputBoard()
{
    delete ui;
}

void InputBoard::on_pushButton_clicked()
{
    this->host = ui->textEdit->toPlainText();
    this->boardID = ui->textEdit_2->toPlainText();
    emit inputBoardReady(this->host.toUtf8().constData(), this->boardID.toInt());
    this->close();
}

std::string InputBoard::getHostname()
{
    return this->host.toUtf8().constData(); //return some Data. In this Case a QString
}

int InputBoard::getBoardId()
{
    return this->boardID.toInt(); //return some Data. In this Case a QString
}

