#ifndef GRAPHICSCENE_H
#define GRAPHICSCENE_H
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>

#include <graphicsobject.h>
#include "circle.h"
#include "tool.h"

class GraphicScene: public QGraphicsScene
{
private:

    bool m_mouseHold = false;
    Graphicsobject *m_currentObject;
    GraphicScene();
    static GraphicScene* m_instance;

    virtual void	mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent);
    virtual void    mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent);
    virtual void    mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
public:

    static GraphicScene* getInstance();

};

#endif // GRAPHICSCENE_H
