#ifndef FLASHCARD_H
#define FLASHCARD_H

#include <string>

// class Deck;

/*Flashcard represents a flashcard with a "concept" and
"definition", initially both are std::string under the hood.
*/
class Flashcard
{
    friend class Deck;

    const size_t m_id;           // id to sort by creation order
    std::string m_concept;       // "concept" side of the flashcard
    std::string m_definition;    // "definition" side of the flashcard
    int m_memorization_level{0}; // how well known is card
    static constexpr int m_max_mem_level{10};
    static constexpr int m_min_mem_level{0};

    // constructor made private because only a deck is able to create a card
    Flashcard(size_t id, const std::string& conception = "",
              const std::string& definition = "");

    // TODO think about better level change system
    // changes memorization level according to test results
    void change_memorization_level(bool result)
    {
        if (result)
            ++m_memorization_level;
        else
            m_memorization_level -= 3;

        if (m_memorization_level < m_min_mem_level)
            m_memorization_level = m_min_mem_level;

        if (m_memorization_level > m_max_mem_level)
            m_memorization_level = m_max_mem_level;
    }


public:
    // returns a "concept" side of the flashcard
    std::string get_concept() const;

    // returns a "definition" part of the flashcard
    std::string get_definition() const;

    // shows a tip - the first line of the card
    // void show_tip();
    // TODO decide what part of a definition is a "tip"

    // change a "concept" to "new_concept"
    void edit_concept(const std::string& new_concept);

    // change a "definition" to "new_definition"
    void edit_definition(const std::string& new_definition);

    // swaps a "concept" and a "definition"
    void swap_concept_and_definition();
};


std::ostream& operator<<(std::ostream& ost, const Flashcard& card);

// TODO invent system for changing memorization level according
// to test results

#endif // FLESHCARD_H
