#ifndef FLASHCARDS_DECK_H
#define FLASHCARDS_DECK_H

#include "../includes/Flashcard.h"
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

/*
Class to represent a deck of flashcards, sort them, shuffle, ...

TODO explore the following
Justification of using std::map for a deck is the fast search by keyword
*/


class Flashcards_deck
{
    size_t m_id{0}; // every card should get an id and increment m_id
    std::vector<size_t>
        unused_ids; // deleted cards' ids are put there for reuse
    std::vector<Flashcard> m_deck;
    int m_num_cards_for_test{10};
    std::vector<Flashcard> m_favourites;

    auto find_by_id(const int& id) const;

    // // a deck in form (concept, flashcard)
    // std::unordered_map<std::string, Flashcard> m_deck;

    // // a map of (id, concept) to perform search by id
    // std::map<int, std::string> m_ids_and_concepts;

    // // for shuffling - pair(index_in_vector, index_in_shuffled_deck)
    // std::vector<std::pair<int, int>> m_order;

    // int m_num_cards_for_test{10}; // number of cards given in every test

    // // TODO decide on data structure for favourites (fast search and
    // deletion) std::set<int> m_favourites; // ids of flashcards marked as
    // favourite


public:
    Flashcards_deck() = default;

    Flashcards_deck(const Flashcard& flashcard);

    Flashcards_deck(Flashcard&& flashcard);

    Flashcards_deck(const Flashcards_deck& flashcards);

    Flashcards_deck(Flashcards_deck&& flashcards);

    // creates a new flashcard
    void add_flashcard(const std::string& con, const std::string& def);

    // deletes flashcard from the deck permanently
    void delete_flashcard(const int id);

    // "shuffles" cards - shuffles order of "order" vector
    void shuffle_cards();

    // imports all flashcards from the "source" deck
    void import_all_from_deck(const Flashcards_deck& source);

    // imports all flashcards from the file containing proper structure
    // TODO add exception mechanism to deal with invalid structure
    void import_all_from_file(const std::string& filename);

    // changes a number of cards for a test (can be more than size of the deck)
    void change_num_cards_for_test(const int& new_number);

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
    void enable_only_favourites() const;

    void add_to_favourites(int id); // add card with given id to favorite

    void delete_from_favourites(int id); // delete card from favorite

    // TODO think about the form of displaying and how to specify a card
    //      for now show a concept
    void show_flashcard(const int& id) const;

    // shows a flashcard with a concept conc
    void show_flashcard(const std::string& conc);
};



#endif // FLASHCARDS_DECK_H
