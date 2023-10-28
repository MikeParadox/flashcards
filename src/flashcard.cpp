#include "../includes/flashcard.h"

#include <iostream>
#include <string>

// shows a "concept" side of the flashcard
void Flashcard::show_concept() const { std::cout << m_concept; }

// shows a "definition" part of the flashcard
void Flashcard::show_definition() const { std::cout << m_definition; }

// change a "concept" to "new_concept"
void Flashcard::edit_concept(const std::string& new_concept)
{
    m_concept = new_concept;
}

// change a "definition" to "new_definition"
void Flashcard::edit_definition(const std::string& new_definition)
{
    m_definition = new_definition;
}





