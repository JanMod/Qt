#include "graphicsobject.h"
#include <qdebug.h>

unsigned int Graphicsobject::m_graphicsobjectCounter = 0;

Graphicsobject::Graphicsobject()
{
    m_graphicsobjectName = QString("graphic_object_%1").arg(m_graphicsobjectCounter++);
    qDebug()<<m_graphicsobjectName;
}

Graphicsobject::~Graphicsobject()
{
    qDebug()<<"Destruktor from: "+ m_graphicsobjectName;
}

QGraphicsItem *Graphicsobject::graphicsItem() const
{
    qDebug()<<"Graphicsobject graphicsItem";
    return m_graphicsItem;
}

int Graphicsobject::x() const
{
    return m_x;
}

void Graphicsobject::setX(int x)
{
    m_x = x;
}

int Graphicsobject::y() const
{
    return m_y;
}

void Graphicsobject::setY(int y)
{
    m_y = y;
}

int Graphicsobject::width() const
{
    return m_width;
}

void Graphicsobject::setWidth(int width)
{
    m_width = width;
}

int Graphicsobject::height() const
{
    return m_height;
}

void Graphicsobject::setHeight(int height)
{
    m_height = height;
}
