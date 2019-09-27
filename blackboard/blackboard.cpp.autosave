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
    QString N1 = ui->textEdit_2->toPlainText();
    QString N2 = ui->textEdit_3->toPlainText();

    if(hostname == "test" && N1 == "2") {
        QMessageBox::information(this, "OK", "YAY");
        ui->loginWidget->hide();
    }
    else {
        QMessageBox::information(this, "VACILO", "NOT YAY");
    }

}
