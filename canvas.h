#ifndef CANVAS_H
#define CANVAS_H


class Canvas
{
private:
    static Canvas* lul;
    Canvas();
public:
    static Canvas* getInstance();
};

#endif // CANVAS_H
