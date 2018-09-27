#ifndef RECTOBJ_H
#define RECTOBJ_H

#include <iostream>
#include "BoxChar.h"

class RectObj
{
protected:
    const int m_w;
    const int m_h;
    int m_x;
    int m_y;

    char** m_data;
public:
    RectObj(int w, int h, int x = 0, int y = 0);
    ~RectObj();

    void print();

    char& operator() (int row, int column);
};

#endif // RECTOBJ_H
