#ifndef GRAPHICSOBJECT_H
#define GRAPHICSOBJECT_H
#include <QString>
#include <QGraphicsItem>
#include <QColor>
class Graphicsobject
{
public:
    Graphicsobject();
    ~Graphicsobject();
    virtual QGraphicsItem *graphicsItem() const;

    virtual int x() const;
    virtual void setX(int x);

    virtual int y() const;
    virtual void setY(int y);

    int width() const;
    virtual void setWidth(int width);

    int height() const;
    virtual void setHeight(int height);

    QColor fillColor() const;
    void setFillColor(const QColor &fillColor);

    QColor borderColor() const;
    void setBorderColor(const QColor &borderColor);

protected:
    static unsigned m_graphicsobjectCounter;
    QString m_graphicsobjectName;
    QGraphicsItem *m_graphicsItem;

    int m_width=0;
    int m_height=0;
    int m_x=0;
    int m_y=0;
    QColor m_fillColor;
    QColor m_borderColor;

};

#endif // GRAPHICSOBJECT_H
