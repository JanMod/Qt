#ifndef TOOL_H
#define TOOL_H
#include <QDebug>
#include "QColor"

using namespace std;

class Tool
{
public:
     enum eTool{Circle,Rectangle,Nothing};
private:
    Tool();
    static Tool* m_instance;
    static eTool m_currentTool;

    QColor m_borderColor;
    QColor m_fillColor;
public:

    static Tool *getInstance();

    static eTool getCurrentTool();
    static void setCurrentTool(const eTool &currentTool);

    QColor getFillColor() const;
    void setFillColor(const QColor &fillColor);

    QColor getBorderColor() const;
    void setBorderColor(const QColor &borderColor);
};

#endif // TOOL_H
