/*
 * discard.h
 * Written by Jordan Sola
 * (C) Jordan Sola 2020 - MIT License
 */

#ifndef DISCARD_H
#define DISCARD_H

#include "deck.h"

class Discard : public Deck
{
public:
    vector<Card> GetDeck();

protected:

};

#endif