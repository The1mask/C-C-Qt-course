#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    char letters;
    int nubers;
    int longer;
    char characters;
    bool cods=0;
    bool integers=0;
    QString filename = "/home/alex/random_Pass/pass.txt";


    int getNubers() const;
    void setNubers(int value);

    char getLetters() const;
    void setLetters(char value);

    int getLonger() const;
    void setLonger(int value);

    char getCharacters() const;
    void setCharacters(char value);

    bool getCods() const;
    void setCods(bool value);

    bool getIntegers() const;
    void setIntegers(bool value);

private slots:
    void on_pushButton_clicked();



    void on_lineEdit_textChanged(const QString &arg1);


    void on_checkBox_clicked(bool checked);

    void on_checkBox_2_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
