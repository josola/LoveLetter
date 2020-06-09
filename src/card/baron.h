/*
 * Determines capabilites of baron card.
 * This software uses the MIT license.
 * Written by Jordan Sola 2019-2020
 */

#ifndef BARON_h
#define BARON_h

#include "card.h"

class Baron : public Card
{
public:
	Baron(const string name, const int value);

    void Action();

private:

};

#endif // !BARON_h