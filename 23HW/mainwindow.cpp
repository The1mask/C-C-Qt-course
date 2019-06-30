#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_2_clicked()
{



}



void MainWindow::on_pushButton_clicked()
{
    char grafik[400];
    int lineNum = 0;
    QString pepoles[400];
    QFile inputFile("/home/alex/Grafik/File.txt");
    if (inputFile.open(QIODevice::ReadOnly))
    {
       QTextStream in(&inputFile);

       while ( !in.atEnd() && lineNum < 1000)
       {

          QString line = in.readLine();

          pepoles[lineNum++] = line;
          ui->label->setText(pepoles[13]);
        }


}

    double a = -1; //Начало интервала, где рисуем график по оси Ox
        double b =  1; //Конец интервала, где рисуем график по оси Ox
        double h = 0.01; //Шаг, с которым будем пробегать по оси Ox

        int N=300; //Вычисляем количество точек, которые будем отрисовывать
        QVector<double> x(N), y(N); //Массивы координат точек

        //Вычисляем наши данные


        for(int i=0;i<300;i=i+2){
            x[i]=pepoles[i].toDouble();
            y[i]=pepoles[i+1].toDouble();
            qDebug() << x[i];
            qDebug() << y[i];
            qDebug() << i;

        }



        ui->widget->clearGraphs();//Если нужно, но очищаем все графики
        //Добавляем один график в widget
        ui->widget->addGraph();
        //Говорим, что отрисовать нужно график по нашим двум массивам x и y
        ui->widget->graph(0)->setData(x, y);

        //Подписываем оси Ox и Oy
        ui->widget->xAxis->setLabel("x");
        ui->widget->yAxis->setLabel("y");

        //Установим область, которая будет показываться на графике
        ui->widget->xAxis->setRange(a, b);//Для оси Ox

        //Для показа границ по оси Oy сложнее, так как надо по правильному
        //вычислить минимальное и максимальное значение в векторах
        double minY = x[0], maxY = x[0];
        double minx = x[0], maxx = x[0];
        for (int i=1; i<N; i++)
        {
            if (y[i]<minY) minY = y[i];
            if (y[i]>maxY) maxY = y[i];
        }
        ui->widget->yAxis->setRange(minY, maxY);//Для оси Oy

        for (int i=1; i<N; i++)
        {
            if (x[i]<minx) minx = x[i];
            if (x[i]>maxx) maxx = x[i];
        }
        ui->widget->xAxis->setRange(minx, maxx);//Для оси Oy


        //И перерисуем график на нашем widget
        ui->widget->replot();
}



