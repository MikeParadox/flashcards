#ifndef FLASHCARD_H
#define FLASHCARD_H

#include <iostream>
#include <string>

class Flashcards_deck;

/*Flashcard represents a flashcard with a "concept" and
"definition", initially both are std::string under the hood.
*/
class Flashcard
{
    friend class Flashcards_deck;

    const size_t m_id;           // id to sort by creation order
    std::string m_concept;       // "concept" side of the flashcard
    std::string m_definition;    // "definition" side of the flashcard
    int m_memorization_level{0}; // how well known is card

    // constructor made private because only a deck is able to create a card
    Flashcard(const int& id, const std::string& conception = "",
              const std::string& definition = "")
        : m_id{id}, m_concept{conception}, m_definition{definition}
    {
    }

public:
    // shows a "concept" side of the flashcard
    void show_concept() const;

    // shows a "definition" part of the flashcard
    void show_definition() const;

    // shows a tip - the first line of the card
    // void show_tip(); // TODO decide what part of a definition is a "tip"

    // change a "concept" to "new_concept"
    void edit_concept(const std::string& new_concept);

    // change a "definition" to "new_definition"
    void edit_definition(const std::string& new_definition);

    // swaps a "concept" and a "definition"
    void swap_concept_definition();
};


#endif // FLESHCARD_H
