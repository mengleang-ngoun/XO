#ifndef BORDER_H
#define BORDER_H
#include <QGraphicsLineItem>
#include <QGraphicsScene>

class BORDER : public QGraphicsLineItem, public QGraphicsScene
{
public:
    BORDER();
    void Create_Border(QGraphicsScene *Parent = nullptr);

};

#endif // BORDER_H
