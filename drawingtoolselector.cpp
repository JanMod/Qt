#include "drawingtoolselector.h"
#include "ui_drawingtoolselector.h"
#include "qdebug.h"
DrawingToolSelector::DrawingToolSelector(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DrawingToolSelector)
{
    ui->setupUi(this);
}

DrawingToolSelector::~DrawingToolSelector()
{
    delete ui;
}

void DrawingToolSelector::on_pushButton_2_clicked()
{
    qDebug()<<"Nothing selected";
    DrawingToolSelector::setAllButtonsFalse();
    ui->pushButton_2->setChecked(true);
    Tool::getInstance()->setCurrentTool(Tool::Nothing);
}

void DrawingToolSelector::on_pushButton_clicked()
{
    qDebug()<<"Circle selected";
    DrawingToolSelector::setAllButtonsFalse();
    ui->pushButton->setChecked(true);
    Tool::getInstance()->setCurrentTool(Tool::Circle);
}

void DrawingToolSelector::on_pushButton_3_clicked()
{
    qDebug()<<"Rectangle selected";
    DrawingToolSelector::setAllButtonsFalse();
    ui->pushButton_3->setChecked(true);
    Tool::getInstance()->setCurrentTool(Tool::Rectangle);
}

void DrawingToolSelector::setAllButtonsFalse()
{
    ui->pushButton->setChecked(false);
    ui->pushButton_2->setChecked(false);
    ui->pushButton_3->setChecked(false);
}
