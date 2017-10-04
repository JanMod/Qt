#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"
#include "graphicscene.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    GraphicScene::getInstance()->setSceneRect(0,0,0,0);

    ui->graphicsView->setScene(GraphicScene::getInstance());
    ui->graphicsView_2->setScene(GraphicScene::getInstance());
    ui->graphicsView->setAlignment(Qt::AlignLeft|Qt::AlignTop);

   // ui->graphicsView->
   // Canvas c = Canvas::getInstance();
    //qDebug();
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

}
