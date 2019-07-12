#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTextCodec>
#include <QFile>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


bool MainWindow::getIntegers() const
{
    return integers;
}

void MainWindow::setIntegers(bool value)
{
    integers = value;
}

bool MainWindow::getCods() const
{
    return cods;
}

void MainWindow::setCods(bool value)
{
    cods = value;
}

char MainWindow::getCharacters() const
{
    return characters;
}

void MainWindow::setCharacters(char value)
{
    characters = value;
}

int MainWindow::getLonger() const
{
    return longer;
}

void MainWindow::setLonger(int value)
{
    longer = value;
}

char MainWindow::getLetters() const
{
    return letters;
}

void MainWindow::setLetters(char value)
{
    letters = value;
}

int MainWindow::getNubers() const
{
    return nubers;
}

void MainWindow::setNubers(int value)
{
    nubers = value;
}

void MainWindow::on_pushButton_clicked()
{
    QFile file(filename);
    QString std;
    int as;
    for(int i=0;i<getLonger();i++){
        as = rand()%26+97;
        setLetters(as);

        setCods(ui->checkBox_2->checkState());
        setIntegers(ui->checkBox->checkState());
        if(getCods()==1){
        setCharacters(rand()%15+33);
    }
        if(getIntegers()==1){
            setNubers(rand()%10);
        }

        if(getCods()==1  && getIntegers()==1){
          std = std + (QString::number(getNubers()) + (QChar(getLetters())) + (QChar(getCharacters())));
    }else{
            if(getCods()==1 && getIntegers()==0){
                std = std + QChar(getLetters()) + QChar(getCharacters());
            }else{
                if(getIntegers()==1 && getCods()==0){
                    std = std + (QString::number(getNubers()) + (QChar(getLetters())));
                }else{
                    std = std + ((QChar(getLetters())));
                }
            }}}
         ui->label->setText(std);


         if (file.open(QIODevice::ReadWrite)) {
             QTextStream stream(&file);
             stream << "passwod:" << std <<endl;

         }




}




void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    setLonger(arg1.toInt());
}


void MainWindow::on_checkBox_clicked(bool checked)
{
    setIntegers(checked);
}

void MainWindow::on_checkBox_2_clicked(bool checked)
{
    setCods(checked);
}
