#ifndef BLACKBOARAD_H
#define BLACKBOARAD_H

#include <QMainWindow>

namespace Ui {
class BlackBoarad;
}

class BlackBoarad : public QMainWindow
{
    Q_OBJECT

public:
    explicit BlackBoarad(QWidget *parent = nullptr);
    ~BlackBoarad();

private:
    Ui::BlackBoarad *ui;
};

#endif // BLACKBOARAD_H
