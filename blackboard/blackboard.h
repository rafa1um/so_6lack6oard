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
    ~BlackBoard();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BlackBoard *ui;
};

#endif // BLACKBOARD_H
