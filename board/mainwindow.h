#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QList>
#include <QMainWindow>

// ScribbleArea used to paint the image
class ScribbleArea;
class InputBoard;
class Client;

class MainWindow : public QMainWindow
{
    // Declares our class as a QObject which is the base class
    // for all Qt objects
    // QObjects handle events
    Q_OBJECT

public:
    MainWindow();
    void UpdateBoard();

protected:

// The events that can be triggered
private slots:
    void penColor();
    void penWidth();
    void inputBoardHandler(const char *host, int boardID);

private:

    // What we'll draw on
    ScribbleArea *scribbleArea;
    InputBoard *inputBoard;
    Client *clnt;

};

#endif
