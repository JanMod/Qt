#include "circle.h"

Circle::Circle(int x, int y)
{
    m_y = y;
    m_x = x;
    m_ellipse = new QGraphicsEllipseItem(m_x, m_y,20, 20);
}

QGraphicsItem *Circle::graphicsItem() const
{
        qDebug()<<"Circle graphicsItem";
        return m_ellipse;
}

void Circle::setX(int x)
{
    this->m_x=x;
    m_ellipse->setX(x);
}

void Circle::setY(int y)
{
    this->m_y=y;
    m_ellipse->setY(y);
}
