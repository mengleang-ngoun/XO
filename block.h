#ifndef BLOCK_H
#define BLOCK_H

#include <QGraphicsItem>
#include <QMouseEvent>
#include <QObject>
#include <QGraphicsView>



class BLOCK :public QGraphicsRectItem
{
public:
    BLOCK();
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void Create_Board (QGraphicsScene * parent);
    int x;
    int y;
    int x1,x2,y1,y2;


private:
    QGraphicsScene *add_to_scene = new QGraphicsScene;
    static int player ;


};

#endif // BLOCK_H
