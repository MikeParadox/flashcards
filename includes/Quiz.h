#ifndef QUIZ_H
#define QUIZ_H

#include "../includes/Flashcard.h"

#include <string_view>

/*
Quiz class represents main learning tool - quizes, tests and repetitions.

*/

class Quiz
{
private:
    size_t m_num_cards_for_test{10};
    bool m_only_favourite{false};

    // returns true if given answer in writing test is correct
    bool is_right_answer_writing(std::string_view answer,
                                 std::string_view conc);

    // returns true if given answer in choose definition test is correct
    bool is_right_answer_choose_def(const Flashcard& card);

public:
    // changes a number of cards for a test (can be more than size of the deck)
    void change_num_cards_for_test(size_t new_number);

    // a user given a concept should write a definition
    void writing_test(const Flashcard& card) const;

    // a user given a concept should choose a correct definition from 4 given
    void choose_definition_test(const Flashcard& card) const;

    // a user given a concept and a definition along each other to memorize
    void reading(const Flashcard& card) const;

    // enable or disable only favorites cards for displaying and tests
    void change_only_favourites_mode(char choice);
};


#endif // QUIZ_H
