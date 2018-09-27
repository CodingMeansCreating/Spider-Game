#include "RectObj.h"

RectObj::RectObj(int w, int h, int x, int y)
                : m_w(w), m_h(h), m_x(x), m_y(y)
{
    m_data = new char*[m_h];
    for (int iii = 0; iii < m_h; ++iii)
        m_data[iii] = new char[m_w];

    for (int row = 0; row < m_h; ++row)
        for (int column = 0 ;column < m_w; ++column)
        {
            if (row == 0 && column == 0)
                m_data[row][column] = BoxChar::UPPER_LEFT;
            else if (row == 0 && column == m_w - 1)
                m_data[row][column] = BoxChar::UPPER_RIGHT;
            else if (row == m_h - 1 && column == 0)
                m_data[row][column] = BoxChar::BOTTOM_LEFT;
            else if (row == m_h - 1 && column == m_w - 1)
                m_data[row][column] = BoxChar::BOTTOM_RIGHT;
            else if ((row == 0 || row == m_h - 1) && column != 0 && column != m_w - 1)
                m_data[row][column] = BoxChar::HORIZONTAL;
            else if ((column == 0 || column == m_w - 1) && row != 0 && row != m_h - 1)
                m_data[row][column] = BoxChar::VERTICAL;
            else
                m_data[row][column] = BoxChar::EMPTY;
        }
}

RectObj::~RectObj()
{
    for (int iii = 0; iii < m_h; ++iii)
        delete[] m_data[iii];
    delete[] m_data;
}

void RectObj::print()
{
    for (int row = 0; row < m_h; ++row)
    {
        for (int column = 0; column < m_w; ++column)
            std::cout << m_data[row][column];
        std::cout << '\n';
    }
}

char& RectObj::operator() (int row, int column)
{
    return m_data[row][column];
}
