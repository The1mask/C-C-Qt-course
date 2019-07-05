#include "Enemy.h"
#include "test.h"
#include "MyRect.h"
#include <QDebug>


Test::Test()
{

}

void Test::check()
{
        MyRect * rect = new MyRect();
        Enemy * enem = new Enemy();
        if(enem->stop==0)
            rect->spawn();
        qDebug()<<enem->stop;


}
