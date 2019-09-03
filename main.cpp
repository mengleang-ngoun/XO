#include <QApplication>
#include "game.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game GameProcess;
    GameProcess.show();
    return a.exec();
}
