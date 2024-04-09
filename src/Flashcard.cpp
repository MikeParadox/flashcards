#include "../includes/Flashcard.h"

#include <iostream>
#include <string>

Flashcard::Flashcard(size_t id, const std::string& conception,
                     const std::string& definition)
    : m_id{id}, m_concept{conception}, m_definition{definition}
{
}


void Flashcard::show_concept() const { std::cout << m_concept << '\n'; }

void Flashcard::show_definition() const { std::cout << m_definition << '\n'; }

void Flashcard::edit_concept(const std::string& new_concept)
{
    m_concept = new_concept;
}

void Flashcard::edit_definition(const std::string& new_definition)
{
    m_definition = new_definition;
}


void Flashcard::swap_concept_definition()
{
    auto temp{m_concept};
    m_concept = m_definition;
    m_definition = temp;
}



