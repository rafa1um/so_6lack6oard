#include <QtWidgets>
#include <QtConcurrent/qtconcurrentrun.h>
#include <QFuture>
#include <QThread>

#include "mainwindow.h"
#include "scribblearea.h"
#include "input.h"
#include "inputboard.h"
#include "client.h"

// MainWindow constructor
MainWindow::MainWindow()
{
    // Create the ScribbleArea widget and make it
    // the central widget
    scribbleArea = new ScribbleArea;
    setCentralWidget(scribbleArea);

    // Set the title
    setWindowTitle(tr("Scribble"));

    // Size the app
    resize(500, 500);
    clnt = new Client;
    inputBoard = new InputBoard;
    connect(inputBoard, &InputBoard::inputBoardReady, this, &MainWindow::inputBoardHandler);
    inputBoard->show();
}

void MainWindow::inputBoardHandler(const char *host, int boardID)
{
    scribbleArea->setMyLastBoard(-1, 0, 0, 0, 0, 0, 0, boardID);
    scribbleArea->setLastBoard(scribbleArea->myLastBoard);
    if (clnt->start(host)){
       // int r1 = clnt->add(n1,n2);
       // int r2 = clnt->sub(n1,n2);

        QMessageBox msgBox;
        msgBox.setText("Conectado com sucesso!");
        int ret = msgBox.exec();
        QFuture<void> f = QtConcurrent::run(this, &MainWindow::UpdateBoard);
    }

}

void MainWindow::UpdateBoard()
{
    board *next;
    next = clnt->get_last(scribbleArea->lastBoard);

    while(1){
        next = clnt->get_last(scribbleArea->lastBoard);
        if (next != nullptr){
            QPoint qp1, qp2;
            qp1.setX(next->x1);
            qp1.setY(next->y1);
            qp2.setX(next->x2);
            qp2.setY(next->y2);
            scribbleArea->drawLineToBoard(qp1, qp2);
            scribbleArea->lastBoard = *next;
        }
        if (!clnt->equals(scribbleArea->lastBoard, scribbleArea->myLastBoard)){
            scribbleArea->lastBoard = scribbleArea->myLastBoard;
            clnt->update_board(scribbleArea->lastBoard);
        }
    }
}

// Opens a dialog to change the pen color
void MainWindow::penColor()
{
    // Store the chosen color from the dialog
    QColor newColor = QColorDialog::getColor(scribbleArea->penColor());

    // If a valid color set it
    if (newColor.isValid())
        scribbleArea->setPenColor(newColor);
}

// Opens a dialog that allows the user to change the pen width
void MainWindow::penWidth()
{
    // Stores button value
    bool ok;

    // tr("Scribble") is the title
    // the next tr is the text to display
    // Get the current pen width
    // Define the min, max, step and ok button
    int newWidth = QInputDialog::getInt(this, tr("Scribble"),
                                        tr("Select pen width:"),
                                        scribbleArea->penWidth(),
                                        1, 50, 1, &ok);
    // Change the pen width
    if (ok)
        scribbleArea->setPenWidth(newWidth);
}
