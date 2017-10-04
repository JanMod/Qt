#include "graphicscene.h"

#include <QDebug>
GraphicScene* GraphicScene::m_instance = 0;

GraphicScene::GraphicScene()
{

}

void GraphicScene::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
    int x = mouseEvent->scenePos().x();
    int y = mouseEvent->scenePos().y();
    qDebug()<<"Mouse pressed at: "<< x<<"     "<< y;
   // qDebug()<<"ScreenPosition: "<< mouseEvent->screenPos().x()<<"     "<< mouseEvent->screenPos().y();
    switch(Tool::getInstance()->getCurrentTool()){
    case Tool::Circle:{
        m_currentObject = new Circle(x,y);
        this->addItem(m_currentObject->graphicsItem());

    }break;
    case Tool::Rectangle:{

        GraphicScene::getInstance()->addRect(mouseEvent->scenePos().x(),mouseEvent->scenePos().y(),20,20);

    }break;
    default:{

    }
    }
    m_mouseHold = true;
}

GraphicScene *GraphicScene::getInstance()
{
    if(!m_instance)
    {
        m_instance = new GraphicScene();
    }
    return m_instance;
}

void GraphicScene::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
    if(m_mouseHold)
    {

    }
}

void GraphicScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

}

