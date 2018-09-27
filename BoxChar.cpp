#include "BoxChar.h"

constexpr char BoxChar::m_boxChar[16];

int BoxChar::findIndex(char c)
{
    for (int index = 0; index < 16; ++index)
        if (c == m_boxChar[index])
            return index;
}

int BoxChar::isBoxChar(char c)
{
    for (int iii = 0; iii < 12; ++iii)
        if (c == m_boxChar[iii] && c != UP && c != RIGHT && c != DOWN && c != LEFT)
            return true;
    return false;
}

char BoxChar::mix(char first, char second)
{
    int firstIndex  = findIndex(first);
    int secondIndex = findIndex(second);

    return m_boxChar[firstIndex | secondIndex];
}
