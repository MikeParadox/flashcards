#ifndef FLASHCARD_H
#define FLASHCARD_H

#include <iostream>
#include <string>

class Flashcards_deck;

/*flashcard is a class representing a flashcard with a "concept" and
"definition", initially both are std::string under the hood.
*/
class Flashcard
{
    friend class Flashcards_deck;

    std::string m_concept;       // "concept" side of the flashcard
    std::string m_definition;    // "definition" side of the flashcard
    int m_id;                    // id to sort by creation order
    int m_memorization_level{0}; // how well known is card

    // TODO to check if m_concept and m_definition are
    //  the same and to suggest a change if they are
    // constructor made private because only a deck is able to create a card
    Flashcard(const std::string& conception = "",
              const std::string& definition = "", const int& id)
        : m_concept{conception}, m_definition{definition}, m_id{id}
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
};


#endif // FLESHCARD_H
