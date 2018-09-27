#include <iostream>
#include "Card.h"

int main()
{
    for (int suit = 3; suit < 7; ++suit)
        for (int rank = 0; rank < 13; ++rank)
            Card(static_cast<Card::CardSuit>(suit), static_cast<Card::CardRank>(rank)).print();

    return 0;
}
