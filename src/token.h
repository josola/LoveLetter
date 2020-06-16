/*
 * token.h
 * Written by Jordan Sola
 * (C) Jordan Sola 2020 - MIT License
 */

#ifndef TOKEN_H
#define TOKEN_H

class Token
{
public:
	const int GetValue() const;

protected:
	const int value_ = 1;

};

#endif
