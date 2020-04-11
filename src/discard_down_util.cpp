/*
 * Helper utility for down pile.
 * This software uses the MIT license.
 * Written by Jordan Sola 2019-2020
 */

#include "discard_down_util.h"

DiscardDownUtil::DiscardDownUtil(DiscardDown& discardDown) : discardDown(discardDown){};

void DiscardDownUtil::SetDownPile(DeckUtil& deckUtil)
{
    discardDown.down_pile.push_back(deckUtil.GetDeck()[0]);
    deckUtil.RemoveCardFromDeck(0);
}

vector<CardUtil> DiscardDownUtil::GetDownPile()
{
    return discardDown.down_pile;
}