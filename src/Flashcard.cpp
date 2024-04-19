#include "../includes/Flashcard.h"

#include <iostream>
#include <string>

Flashcard::Flashcard(size_t id, const std::string& conception,
                     const std::string& definition)
    : m_id{id}, m_concept{conception}, m_definition{definition}
{
}


std::string Flashcard::get_concept() const { return m_concept; }

std::string Flashcard::get_definition() const { return m_definition; }

void Flashcard::edit_concept(const std::string& new_concept)
{
    m_concept = new_concept;
}

void Flashcard::edit_definition(const std::string& new_definition)
{
    m_definition = new_definition;
}

void Flashcard::swap_concept_and_definition()
{
    auto temp{m_concept};
    m_concept = m_definition;
    m_definition = temp;
}


std::ostream& operator<<(std::ostream& ost, const Flashcard& card)
{
    ost << "concept: " << card.get_concept() << '\n'
        << "definition: " << card.get_definition();

    return ost;
}


