#ifndef CARD_H
#define CARD_H

#include "RectObj.h"

class Card final : public RectObj
{
public:
    enum CardSuit
    {
        SUIT_CLUB    = 5,
        SUIT_DIAMOND = 4,
        SUIT_HEART   = 3,
        SUIT_SPADE   = 6
    };
    enum CardRank
    {
        RANK_2,
        RANK_3,
        RANK_4,
        RANK_5,
        RANK_6,
        RANK_7,
        RANK_8,
        RANK_9,
        RANK_10,
        RANK_JACK,
        RANK_QUEEN,
        RANK_KING,
        RANK_ACE
    };
private:
    CardSuit m_suit;
    CardRank m_rank;
public:
    Card(CardSuit suit, CardRank rank);
};

#endif // CARD_H
