#include "MyRect.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Enemy.h"
#include <QDebug>
#include <QTimer>

#include <QDebug>





void MyRect::spawn(){

    // create an enemy
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);



}
