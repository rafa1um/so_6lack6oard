#ifndef BLACKBOARD_H
#define BLACKBOARD_H
#include <QMainWindow>

namespace Ui {
class BlackBoard;
}

class BlackBoard : public QMainWindow
{
    Q_OBJECT

public:
    explicit BlackBoard(QWidget *parent = nullptr);
    std::string getHostname();
    int getN1();
    int getN2();
    ~BlackBoard();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BlackBoard *ui;
    QString host;
    QString n1;
    QString n2;
};

#endif // BLACKBOARD_H
