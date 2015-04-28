#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv.hpp>
#include <QFileDialog>
#include <QDebug>
#include <iostream>
#include <stdlib.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_load_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
