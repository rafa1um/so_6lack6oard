#include "blackboard.h"
#include "ui_blackboard.h"
#include <QMessageBox>

BlackBoard::BlackBoard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BlackBoard)
{
    ui->setupUi(this);

}

BlackBoard::~BlackBoard()
{
    delete ui;
}


void BlackBoard::on_pushButton_clicked()
{
    QString hostname = ui->textEdit->toPlainText();
    QString port = ui->textEdit_2->toPlainText();

    if(hostname == "test" && port == "test") {
        QMessageBox::information(this, "OK", "YAY");
    }
    else {
        QMessageBox::information(this, "VACILO", "NOT YAY");
    }

}
