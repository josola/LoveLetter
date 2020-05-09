/*
 * Helper utility for console out.
 * This program uses the MIT license.
 * Written by Jordan Sola 2019-2020
 */

#include <iostream>
#include <typeinfo>
#include "console_out.h"

using std::cout;

void ConsoleOut::PrintWelcome() { cout << "-- Welcome to Love Letter --\n"; }
void ConsoleOut::PrintStartingPlayerPrompt() { cout << "How many players will be playing?\n"; }
void ConsoleOut::PrintInvalidInput(int output)
{
    switch (output)
    {
    case 0:
        cout << "Invalid input. Please enter an integer.\n";
        break;
    case 1:
        cout << "Invalid input. Please enter a number between 1 and 6.\n";
        break;
    case 2:
        cout << "Invalid input. Please enter a number between 1 and the max number of players: \n";
        break;
    case 3:
        cout << "Invalid input. Number already guessed.\n";
        break;
    case 4:
        cout << "Invalid input. Please enter a string of characters.\n";
        break;
    case 5:
        cout << "Invalid input. Please enter 'd'\n";
        break;
    case 6:
        cout << "Invalid input. Please enter a string.\n";
        break;
    case 7:
        cout << "Invalid input. Please input a number between 0 and 9:\n";
        break;
    case 8:
        cout << "Invalid input. Card not found in hand. Please input a card number that is in your hand:\n";
        break;
    default:
        cout << "Invalid input.\n";
        break;
    }
}
void ConsoleOut::PrintExitPrompt() { cout << "Type 'E' to exit:\n"; }
void ConsoleOut::PrintPlayerGuessPrompt(int output) { cout << "Guess any number between 1 and " << output << ".\n"; }
void ConsoleOut::PrintNameGuess(string name) { cout << name << " guess: \n"; }
void ConsoleOut::PrintCorrectGuessPrompt(string name) { cout << name << " got it! " << name << " goes first!\n"; }
void ConsoleOut::PrintRound(int output) { cout << "-- ROUND " << output << " --\n"; }
void ConsoleOut::PrintPlayerTurn(int output)
{
    switch (output)
    {
    case 1:
        cout << "-- PLAYER[1] turn --\n";
        break;
    case 2:
        cout << "-- PLAYER[2] turn --\n";
        break;
    case 3:
        cout << "-- PLAYER[3] turn --\n";
        break;
    case 4:
        cout << "-- PLAYER[4] turn --\n";
        break;
    case 5:
        cout << "-- PLAYER[5] turn --\n";
        break;
    case 6:
        cout << "-- PLAYER[6] turn --\n";
        break;
    }
}
void ConsoleOut::PrintString(string output) { cout << output << '\n'; }
void ConsoleOut::PrintDeck(DeckController deck)
{
    cout << "Up pile:\n";
    for (auto iCrdCntlr : deck.Deck())
    {
        cout << ' ' << iCrdCntlr.Name();
    }
    cout << '\n';
}
void ConsoleOut::PrintMultipleWinners(GameController game, int range)
{
    cout << "There were multiple winners last round.\n";
    for (auto iPlyrCntlr : game.Players())
    {
        cout << ' ' << iPlyrCntlr.Name();
    }
    cout << " please guess a number between 1 and " << range << '\n';
}
void ConsoleOut::PrintClosestGuess(int target, PlayerController player)
{
    cout << player.Name() << " has the closest guess to target[" << target << "]! They get to go first this round!\n";
}
void ConsoleOut::PrintDeckTotal(DeckController deck)
{
    int size = deck.Deck().size();
    cout << "Total cards in deck: " << size << '\n';
}
void ConsoleOut::PrintRivalPlayers(GameController game)
{
    if (game.PCount() == 2)
    {
        cout << "Rival player: \n";
        for (auto iPlyrCntlr : game.Players())
        {
            if (!iPlyrCntlr.Current())
            {
                cout << ' ' << iPlyrCntlr.Name();
            }
        }
        cout << '\n';
    }
    else
    {
        cout << "Rival players: \n";
        for (auto iPlyrCntlr : game.Players())
        {
            if (!iPlyrCntlr.Current())
            {
                cout << ' ' << iPlyrCntlr.Name();
            }
        }
        cout << '\n';
    }
}
void ConsoleOut::PrintRivalsWithSpy(GameController controller)
{
    int spy_count(0);
    for (auto iPlyrCntlr : controller.Players())
    {
        if (iPlyrCntlr.Spy())
        {
            spy_count++;
        }
    }
    if (spy_count > 0)
    {
        cout << "Rivals with Spy: \n";
        for (auto iPlyrCntlr : controller.Players())
        {
            if (iPlyrCntlr.Spy())
            {
                cout << ' ' << iPlyrCntlr.Name();
            }
        }
        cout << '\n';
    }
}
void ConsoleOut::PrintPlayerHand(vector<CardController> hand)
{
    cout << "Player hand: \n";
    for (auto iCrdCntlr : hand)
    {
        cout << ' ' << iCrdCntlr.Name();
    }
    cout << '\n';
}
void ConsoleOut::PrintDrawPrompt(const string name) { cout << name << " please draw a card.\n"; }
void ConsoleOut::PrintCardChoicePrompt(PlayerController playerUtil) { cout << playerUtil.Name() << " please choose a card to play: \n"; }