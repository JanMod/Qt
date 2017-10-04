#ifndef CIRCLE_H
#define CIRCLE_H

#include <graphicsobject.h>
#include <QDebug>

class Circle : public Graphicsobject
{
public:
    Circle(int x, int y);
    virtual QGraphicsItem *graphicsItem() const;

    virtual void setX(int x);
    virtual void setY(int y);

private:
    QGraphicsEllipseItem *m_ellipse;

};

#endif // CIRCLE_H
