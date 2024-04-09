#ifndef DECK_H
#define DECK_H

#include "../includes/Flashcard.h"
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>


/*
Class to represent a deck of flashcards, sort them, shuffle, ...
*/
/*
TODO explore the following
Justification of using std::map for a deck is the fast search by keyword
*/

class Deck
{
private:
    size_t m_id{0}; // every card should get an id and increment m_id
    // a deck in form (id, flashcard)
    std::unordered_map<size_t, Flashcard> m_deck;
    // a map of (id, concept) to perform search by id
    std::unordered_map<size_t, std::string> m_ids_and_concepts;
    // for shuffling - id, shuffled id
    std::unordered_map<size_t, size_t> m_id_shuffled;
    size_t m_num_cards_for_test{10}; // number of cards given in every test
    std::set<size_t> m_favourite;    // ids of favourite cards
    // auto find_by_id(size_t id) const;
    enum class Sort_order;

public:
    Deck() = default;
    explicit Deck(const Deck& other) = default;
    explicit Deck(Deck&& other) = default;

    Deck& operator=(const Deck& other);
    Deck& operator=(Deck&& other);

    // creates a new flashcard
    void add(const std::string& card_concept,
             const std::string& card_defintion);
    // deletes flashcard from the deck permanently
    void erase(int id);
    // "shuffles" cards - shuffles order of "order" vector
    void shuffle_cards();
    // imports all flashcards from the file containing proper structure
    //  using Importer
    void import_all_from_file(const std::string& filename);
    // changes a number of cards for a test (can be more than size of the deck)
    void change_num_cards_for_test(const int& new_number);
    // a user given a concept should choose a definition
    void choose_definition_test() const;
    // TODO move tests to a separate class Quiz
    // a user given a concept should write a definition
    void writing_test() const;
    void set_num_cards_for_test(const int num_cards);
    // sorts cards by given order
    void sort(const Sort_order& order);
    // TODO move to a separate class Quiz
    void enable_only_favourites() const;
    // add card with given id to favorite
    void add_to_favourites(size_t card_id);
    void delete_from_favourites(size_t casd_id); // delete card from favorite
    // TODO think about the form of displaying and how to specify a card
    //      for now show a concept
    void show_flashcard(const std::string& card_concept) const;
    // shows a flashcard with a concept
    void show_flashcard(size_t card_id);
    size_t size() const; // returns size of a deck
    bool empty() const;
    // delete all the flashcards from a deck
    void clear();
};



#endif // DECK_H
