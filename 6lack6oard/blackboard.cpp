#include "blackboarad.h"
#include "ui_blackboarad.h"

BlackBoarad::BlackBoarad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BlackBoarad)
{
    ui->setupUi(this);
}

BlackBoarad::~BlackBoarad()
{
    delete ui;
}
