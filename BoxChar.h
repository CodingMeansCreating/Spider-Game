#ifndef BOXCHAR_H
#define BOXCHAR_H

class BoxChar
{
public:
    enum BoxEnum
    {
        VERTICAL     = -77,
        RIGHT_SIDE   = -76,
        UPPER_RIGHT  = -65,
        BOTTOM_LEFT  = -64,
        BOTTOM       = -63,
        TOP          = -62,
        LEFT_SIDE    = -61,
        HORIZONTAL   = -60,
        CENTER       = -59,
        BOTTOM_RIGHT = -39,
        UPPER_LEFT   = -38,
        // These four following characters are not actually box drawing characters.
        // However they're not remotely unrelated. Each of them represents the
        // filled side of a character square in console.
        DOWN         = -36,
        LEFT         = -35,
        RIGHT        = -34,
        UP           = -33,

        EMPTY        =  32
    };
private:
    static constexpr char m_boxChar[16] = {EMPTY      , UP          , RIGHT     , BOTTOM_LEFT,
                                           DOWN       , VERTICAL    , UPPER_LEFT, LEFT_SIDE  ,
                                           LEFT       , BOTTOM_RIGHT, HORIZONTAL, BOTTOM     ,
                                           UPPER_RIGHT, RIGHT_SIDE  , TOP       , CENTER      };

    static int findIndex(char c);
public:
    static int isBoxChar(char c);
    static char mix(char first, char second);
};


#endif // BOXCHAR_H
