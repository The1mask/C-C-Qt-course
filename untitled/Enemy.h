#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsRectItem>
#include <QObject>

class Enemy: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    Enemy();
    void keyPressEvent(QKeyEvent * event);
    int stop;


public slots:
    void move();


signals:
    void createNew();


};


#endif // ENEMY_H
