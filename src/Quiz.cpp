#include "../includes/Quiz.h"

#include <iostream>
#include <string>

// returns true if given answer in writing test is correct
bool Quiz::is_right_answer_writing(std::string_view answer,
                                   std::string_view conc)
{
    return answer == conc;
}




// // changes a number of cards for a test (can be more than size of the deck)
void Quiz::change_num_cards_for_test(size_t new_number)
{
    m_num_cards_for_test = new_number;
}

// // a user given a concept should write a definition
void Quiz::writing_test(const Flashcard& card) const
{
    std::cout << "Definition\n" << card.get_definition();
    std::cout << "Your answer: \n";
    std::string answer;
    std::getline(std::cin, answer);
}

// // a user given a concept should choose a correct definition from 4 given
// void choose_definition_test() const;

// // a user given a concept and a definition along each other to memorize
// void reading() const;

// // enable or disable only favorites cards for displaying and tests
// void change_only_favourites_mode(char choice);

