#include "Enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> // rand() -> really large int
#include <QGraphicsItem>
#include "floor.h"
#include "MyRect.h"
#include <QDebug>
#include <QLineEdit>


#include <QDebug>
Enemy::Enemy(): QObject(), QGraphicsRectItem(){


    setPos(400,0);

    // drew the rect
    setRect(0,0,100,100);

    // connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);


}

void Enemy::move(){

    stop=1;

    MyRect * rect = new MyRect();


  // connect(&stop1,&QObject::objectNameChanged,some,&))


    QList<QGraphicsItem *> collidig_items = collidingItems();
    for(int i = 0,n= collidig_items.size(); i<n;i++){
        if(typeid(*(collidig_items[i])) == typeid(Floor) || typeid(*(collidig_items[i])) == typeid(Enemy) )
        {

         stop=0;






        }
    }



    // move enemy down
    if(stop!=0){
    setPos(x(),y()+5);
 }
    else
        setPos(x(),y());



}

void Enemy::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_Left){

        setX(10000);
    }
    else if (event->key() == Qt::Key_Right){

        setPos(x()+1000,y());
    }

}






