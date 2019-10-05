#ifndef INPUT_H
#define INPUT_H

#include <QDialog>

namespace Ui {
class input;
}

class input : public QDialog
{
    Q_OBJECT

public:
    explicit input(QWidget *parent = nullptr);
    std::string getHostname();
    int getN1();
    int getN2();
    ~input();

private slots:
    void on_pushButton_clicked();

signals:
     void inputReady(const char *host, int n1, int n2);

private:
    Ui::input *ui;
    QString host;
    QString n1;
    QString n2;
};

#endif // INPUT_H
