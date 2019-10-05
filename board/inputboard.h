#ifndef INPUTBOARD_H
#define INPUTBOARD_H

#include <QDialog>

namespace Ui {
class InputBoard;
}

class InputBoard : public QDialog
{
    Q_OBJECT

public:
    explicit InputBoard(QWidget *parent = nullptr);
    std::string getHostname();
    int getBoardId();
    ~InputBoard();

private slots:
    void on_pushButton_clicked();

signals:
     void inputBoardReady(const char *host, int boardID);

private:
    QString host;
    QString boardID;
    Ui::InputBoard *ui;
};

#endif // INPUTBOARD_H
