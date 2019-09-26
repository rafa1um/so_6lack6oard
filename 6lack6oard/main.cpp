#include "blackboarad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BlackBoarad w;
    w.show();

    return a.exec();
}
