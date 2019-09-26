#include "blackboard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BlackBoard w;
    w.show();

    return a.exec();

}
