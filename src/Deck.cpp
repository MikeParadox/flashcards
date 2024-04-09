#include "../includes/Deck.h"

#include <iostream>

void Deck::add(const std::string& card_concept,
               const std::string& card_defintion)
{
    ++m_id;
    m_deck.emplace(m_id, Flashcard{m_id, card_concept, card_defintion});
}

void Deck::erase(int id)
{
    m_deck.erase(id);
    m_ids_and_concepts.erase(id);
    m_id_shuffled.erase(id);
}

void Deck::show_flashcard(size_t card_id)
{
    if (m_deck.contains(card_id))
    {
        auto f{m_deck.find(card_id)};
        std::cout << "concept: " << f->second.m_concept << '\n'
                  << "definition: " << f->second.m_definition << '\n';
    }
}

size_t Deck::size() const { return m_deck.size(); }

bool Deck::empty() const { return m_deck.empty(); }

void Deck::clear()
{
    m_id = 0;
    m_deck.clear();
    m_favourite.clear();
    m_id_shuffled.clear();
}




enum class Deck::Sort_order
{
    memorization_assending,
    memorization_dissending,
    id_assending,
    id_disssending
};

