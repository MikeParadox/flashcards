#ifndef QUIZ_H
#define QUIZ_H

#include "../includes/Deck.h"

/*
Quiz class represents main learning tool - quizes, tests and repetitions.

*/

class Quiz
{
    // changes a number of cards for a test (can be more than size of the deck)
    void change_num_cards_for_test(const int& new_number);

    // a user given a concept should write a definition
    void writing_test() const;

    // a user given a concept should choose a correct definition from 4 given
    void choose_definition_test() const;

    // enable only favorites cards for displaying and tests
    void enable_only_favourites() const;
};


#endif // QUIZ_H
