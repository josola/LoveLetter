//===-- deck.h - Deck class definition -------*- C++ -*-===//
//
// This software uses the MIT license.
// See https://mit-license.org/ for license information.
//
//===----------------------------------------------------------------------===//
///
/// This file determines the capabilities of the main Deck. The "Discard" and
/// the "Aside" piles are derived from this class.
///
//===----------------------------------------------------------------------===//

#ifndef DECK_H
#define DECK_H

#include <vector>

using std::vector;

class Card;

class Deck
{
public:
  // getters
  const int Size() const;
  const bool Empty() const;
  Card GetCard(const int position);

  // setters
  void Clear();
  void Set();

  // actions
  void Shuffle();
  void Insert(Card card);
  void Print() const;

protected:
  vector<Card> pile_;
};

#endif
