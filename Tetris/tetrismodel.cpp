#include "tetrismodel.h"

#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <numeric>
#include <QTextCodec>
#include <QChar>
#include <QDebug>
#include <QFile>


int blocksToPoints( int x ) {
    return x * BLOCK_SIZE;
}

// ********************************************************************************
TetrisModel::TetrisModel( int widthBlocks, int heightBlocks ) :

    m_widthBlocks( widthBlocks ), m_heightBlocks( heightBlocks ), m_dropEnabled( false ) {
    if( m_widthBlocks <= 0 || m_heightBlocks <= 0 ) {
        throw std::invalid_argument( "Width and height of the tetris field must be > 0" );
    }

    srand( time( 0 ) );

    resetGame();
}

const TetrisItem& TetrisModel::getItem() const {
    return m_activeItem;
}

const TetrisItem &TetrisModel::getCoordItem(int xBlocks, int yBlocks) const
{

       // qDebug(qPrintable(m_item.letter));

    return 0;
}

int TetrisModel::getSecElemCoord() const
{
    return secElemCoord;
}

void TetrisModel::setSecElemCoord(int value)
{
    secElemCoord = value;
}

int TetrisModel::getFirstElemCoord() const
{
    return firstElemCoord;
}

void TetrisModel::setFirstElemCoord(int value)
{
    firstElemCoord = value;
}



void TetrisModel::doStep() {



    if( m_activeItem.isNull() ) {

        m_itemBottomTouchCounter = 0;
        if(getAbra()==1){

            m_activeItem = TetrisItem::generateLetterA();
            setAbra(2);
        }
        else{


        m_activeItem = TetrisItem::generateRandom();
             setAbra(1);



        }
        m_activeItem.test();
        int xPoints = blocksToPoints( getWidthBlocks() / 2 );
        if( m_activeItem.getSizeBlocks() % 2 == 1 ) {
            // Если элемент состоит из нечетного числа блоков, то выравниваем его по сетке:
            xPoints += HALF_BLOCK_SIZE;
        }
        m_activeItem.setPosition( xPoints, 0 );
        if( hasCollisions( m_activeItem ) ) {
            m_gameOver = true;
        }
    }

    if( isGameOver() ) {
        return;
    }

    int speed = m_dropEnabled ? MAX_SPEED : m_speed;
    TetrisItem item = m_activeItem;
    QString str1=item.letter;
    QString str2=item.letter;
    item.setPosition( m_activeItem.getXPoints(), m_activeItem.getYPoints() + speed );

    if( !hasCollisions( item ) ) {
        m_activeItem = item;
        m_itemBottomTouchCounter = 0;
    } else {
        while( hasCollisions( item ) ) {
            item.setPosition( item.getXPoints(), item.getYPoints() - 1 );
        }


        if( MAX_TOUCH_COUNT < m_itemBottomTouchCounter ) {
            m_item = m_activeItem;
            m_activeItem = TetrisItem();
            for( int xBlocks = 0; xBlocks < item.getSizeBlocks(); ++xBlocks ) {
                for( int yBlocks = 0; yBlocks < item.getSizeBlocks(); ++yBlocks ) {
                    int blockType = item.getBlockType( xBlocks, yBlocks );
                    if( blockType != 0 ) {
                        int xPoints = item.getBlockXPoints( xBlocks );
                        int yPoints = item.getBlockYPoints( yBlocks );

                        m_fieldMatrix[ yPoints / BLOCK_SIZE ][  xPoints / BLOCK_SIZE ] = blockType;










                    }
                }
            }
            clean();
        } else {
            m_activeItem = item;

            ++m_itemBottomTouchCounter;
            int coord1=0;
            int coord2=0;



               if(item.getXPoints()/BLOCK_SIZE==1){
                   coord1=m_fieldMatrix[item.getYPoints()/BLOCK_SIZE][0];
                   if(item.a[coord1+1]!=' '){

                      str1 = item.a[coord1] + str1;

                      }
               }else{

                for(int i = item.getXPoints()/BLOCK_SIZE;i<m_widthBlocks;i++){

                    setFirstElemCoord(item.getXPoints()/BLOCK_SIZE);

                    if(m_fieldMatrix[item.getYPoints()/BLOCK_SIZE][i+1]==0){

                        coord1=m_fieldMatrix[item.getYPoints()/BLOCK_SIZE][i];
                        if(item.a[coord1]!=' '){

                           str1 = str1 + item.a[coord1];

                        }
                       break;
                    }else{


                        coord1=m_fieldMatrix[item.getYPoints()/BLOCK_SIZE][i];

                             if(item.a[coord1]!=' '){
                           str1 = str1 + item.a[coord1];

                            }

                    }
                }
                for(int i = item.getXPoints()/BLOCK_SIZE;i>=0;i--){

                    if(item.getXPoints()/BLOCK_SIZE==1){

                        str1 = item.a[coord1] + str1;
                        setFirstElemCoord(coord1);
                    }else{

                    if(m_fieldMatrix[item.getYPoints()/BLOCK_SIZE][i-1]==0){
                        coord1=m_fieldMatrix[item.getYPoints()/BLOCK_SIZE][i];
                        if(item.a[coord1]!=' '){

                           str1 = item.a[coord1] + str1;
                            setFirstElemCoord(i);
                           }
                       break;
                    }else{




                        coord1=m_fieldMatrix[item.getYPoints()/BLOCK_SIZE][i];
                            if(item.a[coord1]!=' '){

                           str1 = item.a[coord1] + str1;


                            }

                    }
                }}}







                //-----------------------------------------------------//


               for(int i = item.getYPoints()/BLOCK_SIZE;i<=m_heightBlocks;i++){



                   if(i==24){


                       coord2=m_fieldMatrix[i][item.getXPoints()/BLOCK_SIZE];
                          if(item.a[coord2]!=' '){

                          str2 = str2 + item.a[coord2];
                             qDebug()<<"odin"<<item.getXPoints()/BLOCK_SIZE<<qPrintable(item.a[coord2]);
                            setSecElemCoord(i);
                         }

                             break;
                   }else{


                       coord2=m_fieldMatrix[i][item.getXPoints()/BLOCK_SIZE];
                            if(item.a[coord2]!=' '){

                          str2 = str2 + item.a[coord2];
                                 qDebug()<<str2<<item.a[coord2];

                        }

                   }
               }
               for(int i = item.getYPoints()/BLOCK_SIZE;i>=0;i--){
                    qDebug()<<i;


                   if(m_fieldMatrix[i-1][item.getXPoints()/BLOCK_SIZE]==0){

                       coord2=m_fieldMatrix[i][item.getXPoints()/BLOCK_SIZE];
                            if(item.a[coord2]!=' '){
                         qDebug()<<"tri"<<i;
                          str2 = str2 + item.a[coord2] ;

                            }
                      break;
                   }else{




                       coord2=m_fieldMatrix[i][item.getXPoints()/BLOCK_SIZE];
                        if(item.a[coord2]!=' '){

                          str2 = str2 + item.a[coord2];
                            }



                   }
               }}}




                setFirstStr(str1);
                setSecondStr(str2);

                 qDebug()<<getFirstStr()<<getSecondStr()<<getSecElemCoord();



}

bool TetrisModel::isGameOver() const {
    return m_gameOver;
}

int TetrisModel::getScore() const {
    return m_score;
}

void TetrisModel::resetGame() {
    m_activeItem = TetrisItem();

    m_fieldMatrix.clear();
    m_fieldMatrix.resize( getHeightBlocks() );
    for( std::vector< int >& row : m_fieldMatrix ) {
        row.resize( getWidthBlocks() );
    }

    m_speed = MIN_SPEED;
    m_score = 0;
    m_gameOver = false;
}

void TetrisModel::rotateItem() {
    TetrisItem item = m_activeItem;
    item.rotate();
    if( !hasCollisions( item ) ) {
        m_activeItem = item;
        return;
    }

    item.setPosition( item.getXPoints() + BLOCK_SIZE, item.getYPoints() );
    if( !hasCollisions( item ) ) {
        m_activeItem = item;
        return;
    }

    item.setPosition( item.getXPoints() - blocksToPoints( 2 ), item.getYPoints() );
    if( !hasCollisions( item ) ) {
        m_activeItem = item;
        return;
    }
}

void TetrisModel::moveItemLeft() {
    moveItemX( -BLOCK_SIZE );
}

void TetrisModel::moveItemRight() {
    moveItemX( BLOCK_SIZE );
}

void TetrisModel::moveItemX( int offsetPoints ) {
    TetrisItem item = m_activeItem;
    item.setPosition( item.getXPoints() + offsetPoints, item.getYPoints() );
    if( !hasCollisions( item ) ) {
        m_activeItem = item;
    }
}

void TetrisModel::startDrop() {
    m_dropEnabled = true;
}

void TetrisModel::stopDrop() {
    m_dropEnabled = false;
}

int TetrisModel::getWidthBlocks() const {
    return m_widthBlocks;
}

int TetrisModel::getHeightBlocks() const {
    return m_heightBlocks;
}

int TetrisModel::getWidthPoints() const {
    return blocksToPoints( getWidthBlocks() );
}

int TetrisModel::getHeightPoints() const {
    return blocksToPoints( getHeightBlocks() );
}

int TetrisModel::getBlockType( int xBlocks, int yBlocks ) const {
    static const int BORDER_BLOCK_TYPE = -1;

    if( xBlocks < 0 || getWidthBlocks() <= xBlocks || getHeightBlocks() <= yBlocks ) {
        return BORDER_BLOCK_TYPE;
    } else if( yBlocks < 0 ) {
        return 0;
    }

    return m_fieldMatrix[ yBlocks ][ xBlocks ];
}

void TetrisModel::getCollisionLetter()
{
    int x;
    int y;

    x=getItem().getXPoints();
    y=getItem().getYPoints();


    //qDebug()<<getBlockType(x,y);

}

int TetrisModel::getAbra() const
{
    return abra;
}

void TetrisModel::setAbra(int value)
{
    abra = value;
}

QString TetrisModel::getSecondStr() const
{
    return secondStr;
}

void TetrisModel::setSecondStr(const QString &value)
{
    secondStr = value;
}



QString TetrisModel::getFirstStr() const
{
    return firstStr;
}

void TetrisModel::setFirstStr(const QString &value)
{
    firstStr = value;
}



bool TetrisModel::hasCollisions( const TetrisItem& item ) const {
    for( int xBlocks = 0; xBlocks < item.getSizeBlocks(); ++xBlocks ) {
        for( int yBlocks = 0; yBlocks < item.getSizeBlocks(); ++yBlocks ) {
            if(
                item.getBlockType( xBlocks, yBlocks ) > 0 &&
                hasCollisions( item.getBlockXPoints( xBlocks ), item.getBlockYPoints( yBlocks ) )
            ) {

                return true;
            }
        }
    }

    return false;
}

bool TetrisModel::hasCollisions( int xPoints, int yPoints ) const {
    int xBlocks = ( xPoints < 0 ) ? -1 : xPoints / BLOCK_SIZE;
    int yTopBlocks = yPoints - HALF_BLOCK_SIZE;
    if( getBlockType( xBlocks, yTopBlocks / BLOCK_SIZE ) ) {

        return true;
    }
    int yBottomBlocks = yPoints + HALF_BLOCK_SIZE;
    if( yTopBlocks % BLOCK_SIZE != 0 && getBlockType( xBlocks, yBottomBlocks / BLOCK_SIZE ) ) {
         //qDebug(qPrintable(m_item.letter));
        return true;
    }

    return false;
}

void TetrisModel::clean() {

    //qDebug()<<"Clean";
    int counter=0;
    QFile file("/home/alex/Tetris/Words.txt");
    if(file.open(QFile::ReadOnly)){
        QTextStream in(&file);
        qDebug()<<"read";
         //qDebug()<<m_item.getXPoints()/BLOCK_SIZE<<getFirstElemCoord();
        while (!in.atEnd()) {
            QString line = in.readLine();
            if(line==getFirstStr()){
                qDebug()<<"finde1";

          counter = 1;

            }else{
                if(line==getSecondStr()){
                  qDebug()<<"finde2";
                  counter = 2;
                }
            }}
    for( int i = 0; i <= getFirstStr().size(); ++i ) {


        if( counter == 0 ) {
            return;
        } else if( counter == 1 ) {
            qDebug()<<"start1";

            if(m_fieldMatrix[m_item.getYPoints()/BLOCK_SIZE-1][getFirstElemCoord()+i]==0){
            m_fieldMatrix[m_item.getYPoints()/BLOCK_SIZE][getFirstElemCoord()+i]=0;
            }else{

                 m_fieldMatrix[m_item.getYPoints()/BLOCK_SIZE][getFirstElemCoord()+i]=m_fieldMatrix[m_item.getYPoints()/BLOCK_SIZE-1][getFirstElemCoord()+i];
                 m_fieldMatrix[m_item.getYPoints()/BLOCK_SIZE-1][getFirstElemCoord()+i]=0;


            }

            incScore();

        }else if( counter == 2 ) {
            qDebug()<<"start2";


            m_fieldMatrix[m_item.getYPoints()/BLOCK_SIZE][getSecElemCoord()-i]=0;
           }}
    }
}

void TetrisModel::incScore() {
    ++m_score;
    if( m_score % SCORE_COUNT_FOR_NEXT_LEVEL == 0 ) {
        incSpeed();
    }
}

void TetrisModel::incSpeed() {
    if( m_speed < MAX_SPEED ) {
        ++m_speed;
    }
}


// ********************************************************************************
TetrisItem::TetrisItem( int xPoints, int yPoints ) : m_xPoints( xPoints ), m_yPoints( yPoints ) {
}

TetrisItem TetrisItem::generateRandom() {
    int type;
    static const std::vector< TetrisItem > ITEMS = {

        TetrisItem( {
            { 2, 2 },
        } ),
        TetrisItem( {
            { 3, 3 },
        } ),
        TetrisItem( {
            { 4, 4 },
        } ),
        TetrisItem( {
            { 5, 5 },
        } ),
        TetrisItem( {
            { 7, 7 },
        } ),
        TetrisItem( {
            { 8, 8 },
        } ),

        TetrisItem( {
            { 10, 10 },
        } ),
        TetrisItem( {
            { 9, 9 },
        } ),
        TetrisItem( {
            { 11, 11 },
        } ),
        TetrisItem( {
            { 13, 13 },
        } ),
        TetrisItem( {
            { 14, 14 },
        } ),
        TetrisItem( {
            { 15, 15 },
        } ),
        TetrisItem( {
            { 16, 16 },
        } ),
        TetrisItem( {
            { 17, 17 },
        } ),
        TetrisItem( {
            { 18, 18 },
        } ),
        TetrisItem( {
            { 19, 19 },
        } ),
        TetrisItem( {
            { 20, 20 },
        } ),
        TetrisItem( {
            { 21, 21 },
        } ),
        TetrisItem( {
            { 22, 22 },
        } ),

        TetrisItem( {
            { 24, 24 },
        } ),
        TetrisItem( {
            { 25, 25 },
        } ),
        TetrisItem( {
            { 26, 26 },
        } ),
        TetrisItem( {
            { 27, 27 },
        } ),
        TetrisItem( {
            { 28, 28 },
        } ),



    };
      type=rand()%23+1;





      return ITEMS[ type ];
}

TetrisItem TetrisItem::generateLetterA() {
    int type;
    static const std::vector< TetrisItem > ITEMS = {
        TetrisItem( {
            { 1, 1 },
        } ),
        TetrisItem( {
            { 6, 6 },
        } ),
        TetrisItem( {
            { 9, 9 },
        } ),
        TetrisItem( {
            { 23, 23 },
        } ),
        TetrisItem( {
            { 31, 31 },
        } ),
        TetrisItem( {
            { 29, 29 },
        } ),
        TetrisItem( {
            { 30, 30 },
        } ),

    };


        type=rand()%5;
        qDebug()<<type;
      return ITEMS[ type ];
}






bool TetrisItem::isNull() const {
    return m_matrix.empty();
}

void TetrisItem::rotate() {
    Matrix rotatedMatrix( getSizeBlocks() );
    for( int i = 0; i < getSizeBlocks(); ++i ) {
        rotatedMatrix[ i ].resize( getSizeBlocks() );
        for( int j = 0; j < getSizeBlocks(); ++j ) {
            rotatedMatrix[ i ][ j ] = m_matrix[ j ][ getSizeBlocks() - 1 - i ];
            //qDebug()<<m_xPoints<<m_yPoints;

        }
    }

    m_matrix = rotatedMatrix;
}

void TetrisItem::setPosition( int xPoints, int yPoints ) {
    m_xPoints = xPoints;
    m_yPoints = yPoints;
}

int TetrisItem::getXPoints() const {
    return m_xPoints;
}

int TetrisItem::getYPoints() const {
    return m_yPoints;
}

int TetrisItem::getSizeBlocks() const {
    return m_matrix.size();
}

int TetrisItem::getBlockType( int innerXBlocks, int innerYBlocks ) const {
    if( innerXBlocks < 0 || getSizeBlocks() <= innerXBlocks || innerYBlocks < 0 || getSizeBlocks() <= innerYBlocks ) {
        return 0;
    }

    return m_matrix[ innerYBlocks ][ innerXBlocks ];
}

int TetrisItem::getBlockXPoints( int innerXBlocks ) const {
    int innerXPoints = blocksToPoints( innerXBlocks ) + HALF_BLOCK_SIZE;
    int innerXCenterPoints = blocksToPoints( getSizeBlocks() ) / 2;

    return m_xPoints - innerXCenterPoints + innerXPoints;

}

int TetrisItem::getBlockYPoints( int innerYBlocks ) const {
    int innerYPoints = blocksToPoints( innerYBlocks ) + HALF_BLOCK_SIZE;
    int innerYCenterPoints = blocksToPoints( getSizeBlocks() ) / 2;

    return m_yPoints - innerYCenterPoints + innerYPoints;
}

void TetrisItem::debug(int y, int x)
{
     //qDebug()<<"test"<<m_matrix[y/BLOCK_SIZE][x/BLOCK_SIZE];
}


QChar TetrisItem::test()

{


        QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8")); //изменения



        letter=a[getBlockType(m_xPoints,m_yPoints)];

                return letter;
}



TetrisItem::TetrisItem( const Matrix& matrix ) : TetrisItem() {


    m_matrix = matrix;
}
