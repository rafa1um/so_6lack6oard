#include "mainwindow.h"
#include "input.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // The main application
    QApplication app(argc, argv);

    // Create and open the main window
    input board;
    board.show();

    // Display the main window
    return app.exec();
}
