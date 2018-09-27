#include "Card.h"

Card::Card(CardSuit suit, CardRank rank)
          : RectObj(6, 5),
            m_suit(suit), m_rank(rank)
{
    m_data[1][4] = m_suit;

    switch (m_rank)
    {
    case RANK_2:
        m_data[1][1] = '2';
        break;
    case RANK_3:
        m_data[1][1] = '3';
        break;
    case RANK_4:
        m_data[1][1] = '4';
        break;
    case RANK_5:
        m_data[1][1] = '5';
        break;
    case RANK_6:
        m_data[1][1] = '6';
        break;
    case RANK_7:
        m_data[1][1] = '7';
        break;
    case RANK_8:
        m_data[1][1] = '8';
        break;
    case RANK_9:
        m_data[1][1] = '9';
        break;
    case RANK_10:
        m_data[1][1] = '1';
        m_data[1][2] = '0';
        break;
    case RANK_JACK:
        m_data[1][1] = 'J';
        break;
    case RANK_QUEEN:
        m_data[1][1] = 'Q';
        break;
    case RANK_KING:
        m_data[1][1] = 'K';
        break;
    case RANK_ACE:
        m_data[1][1] = 'A';
        break;
    }
}
