#ifndef FLASHCARDS_DECK_H
#define FLASHCARDS_DECK_H

#include "../includes/flashcard.h"
#include <map>
#include <string>
#include <utility>
#include <vector>

/*
Class to represent a deck of flashcards, sort them, shuffle, ...
*/


class Flashcards_deck
{
    int m_id{0}; // every card should get an id and increment
    std::vector<Flashcard> m_deck;
    // for shuffling - pair(index_in_vector, index_in_shuffled_deck)
    int m_memorization_level{0};
    std::vector<std::pair<int, int>> m_order; // TODO think up a better way
    int num_cards_for_test{10}; // number of cards given in every test
    std::vector<int> favorites{};

public:
    Flashcards_deck() = default;

    Flashcards_deck(const Flashcard& flashcard);

    Flashcards_deck(Flashcard&& flashcard);

    Flashcards_deck(const Flashcards_deck& flashcards);

    Flashcards_deck(Flashcards_deck&& flashcards);

    // creates a new flashcard
    void add_flashcard(const std::string& con, const std::string& def);

    // "shuffles" cards - shuffles order of "order" vector
    void shuffle_cards();

    // imports all flashcards from the "source" deck
    void import_all_from_deck(const Flashcards_deck& source);

    // imports all flashcards from the file containing proper structure
    // TODO add exception mechanism to deal with invalid structure
    void import_all_from_file(const std::string& filename);

    // TODO choose a way to take number of cards for tests

    // a user given a concept should choose a definition
    void choose_definition_test() const;

    // a user given a concept should write a definition
    void writing_test() const;

    void set_num_cards_for_test(const int num_cards);

    void sort_by_creation_date(); // sort cards for tests by order of creation

    // sort cards for tests by memorization level (a - ascending, b -
    // discenging)
    void sort_by_memorization(const char order);

    // TODO think up a way to enable learning only favorite cards
    void enable_only_favorite();

    void add_to_favorite(int id); // add card with given id to favorite

    void delete_from_favorite(int id); // delete card from favorite
};



#endif // FLASHCARDS_DECK_H
