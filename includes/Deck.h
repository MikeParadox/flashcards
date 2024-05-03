#ifndef DECK_H
#define DECK_H

#include "../includes/Flashcard.h"
#include "../includes/Quiz.h"

#include <map>
#include <optional>
#include <set>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

// TODO rewrite getters


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
    // a map of (concept, id) to perform search by concept
    std::unordered_map<std::string, size_t> m_concepts_and_ids;
    // for shuffling - id, shuffled id
    std::unordered_map<size_t, size_t> m_id_shuffled;
    // TODO move to Quiz class
    // size_t m_num_cards_for_test{10}; // number of cards given in every test
    std::set<size_t> m_favourite; // ids of favourite cards
    // auto find_by_id(size_t id) const;
    Quiz m_quiz; // quiz driver


    enum class Sort_order;

public:
    Deck() = default;
    explicit Deck(const Deck& src) = default;
    explicit Deck(Deck&& src) = default;

    Deck& operator=(const Deck& src);
    Deck& operator=(Deck&& src);

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
    // sorts cards by given order
    void sort(const Sort_order& order);
    // add card with given id to favorite
    void add_to_favourites(size_t card_id);
    void delete_from_favourites(size_t casd_id); // delete card from favorite
    // returns a flashcard with a given concept or nullopt if there is no card
    // with such an id in the deck
    std::optional<Flashcard> get(const std::string& card_concept) const;
    // returns a flashcard with a given id or nullopt if there is no card with
    // such an id in the deck
    std::optional<Flashcard> get(size_t card_id) const;
    size_t size() const; // returns size of a deck
    bool empty() const;
    // delete all the flashcards from a deck
    void clear();
    // prints flashcards // TODO add sorting
    void print_deck() const;
};


#endif // DECK_H
