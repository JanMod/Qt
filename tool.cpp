#include "tool.h"
Tool* Tool::m_instance=0;
Tool::eTool Tool::m_currentTool=Tool::Circle;
Tool *Tool::getInstance()
{
    if(!m_instance){
        m_instance = new Tool();
    }
    return m_instance;
}




Tool::Tool()
{

}

QColor Tool::getBorderColor() const
{
    return m_borderColor;
}

void Tool::setBorderColor(const QColor &borderColor)
{
    m_borderColor = borderColor;
}

QColor Tool::getFillColor() const
{
    return m_fillColor;
}

void Tool::setFillColor(const QColor &fillColor)
{
    m_fillColor = fillColor;
}

Tool::eTool Tool::getCurrentTool()
{
    return m_currentTool;
}

void Tool::setCurrentTool(const eTool &currentTool)
{
    qDebug()<<currentTool;

    m_currentTool = currentTool;
}
