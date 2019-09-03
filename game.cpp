#include "game.h"
#include "ui_game.h"
#include "block.h"
#include "border.h"
#include "playerline.h"

Game::Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);

    // create block:
       //Create GraphicsScene and item to scene:
          QGraphicsScene *Scene = new QGraphicsScene;
          Scene->setSceneRect(0,50,850,850);// set size and coordinate of scene

       //Create Collect Block from :
          BLOCK *block = new BLOCK;
          block->Create_Board(Scene);

    // create GraphicsView:
          ui->view->setScene(Scene);
          ui->view->setFixedSize(850,850);
    // remove scrollbars:
          ui->view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
          ui->view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    // Create Border area:
          BORDER *border = new BORDER;
          border->Create_Border(Scene);

}

Game::~Game()
{
    delete ui;
}



void Game::on_PLAY_BUTTON_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->Background->setStyleSheet("background-color: yellow");
}

void Game::on_Solo_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->Background->setStyleSheet("background-color: White");
}


