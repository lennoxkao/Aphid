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

void MainWindow::on_load_clicked()
{
    cv::Mat test = cv::imread("123.jpg");
    cv::imshow("test",test);

    cv::resize(test,test,cv::Size(400,300));
    QImage img((const unsigned char*)(test.data), test.cols, test.rows, QImage::Format_RGB888);
    ui->label->setPixmap(QPixmap::fromImage(img));



}
