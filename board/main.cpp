#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // The main application
    QApplication app(argc, argv);

    // Create and open the main window
    MainWindow mainWindow;
    mainWindow.show();

    // Display the main window
    return app.exec();
}
