#include "../includes/Deck.h"

#include <iostream>

Deck& Deck::operator=(const Deck& src)
{
    m_id = src.m_id;
    m_deck = src.m_deck;
    m_concepts_and_ids = src.m_concepts_and_ids;
    m_id_shuffled = src.m_id_shuffled;
    m_favourite = src.m_favourite;

    return *this;
}

Deck& Deck::operator=(Deck&& src)
{
    m_id = src.m_id;
    m_deck = std::move(src.m_deck);
    m_concepts_and_ids = std::move(src.m_concepts_and_ids);
    m_id_shuffled = std::move(src.m_id_shuffled);
    m_favourite = std::move(src.m_favourite);

    return *this;
}

void Deck::add(const std::string& card_concept,
               const std::string& card_defintion)
{
    ++m_id;
    m_deck.emplace(m_id, Flashcard{m_id, card_concept, card_defintion});
}

void Deck::erase(int id)
{
    if (m_deck.contains(id))
    {
        m_concepts_and_ids.erase(m_deck.find(id)->second.get_concept());
        m_deck.erase(id);
        m_id_shuffled.erase(id);
    }
}

std::optional<Flashcard> Deck::get(const std::string& card_concept) const
{
    if (m_concepts_and_ids.contains(card_concept))
        return std::optional<Flashcard>{
            m_deck.find(m_concepts_and_ids.find(card_concept)->second)->second};

    return std::nullopt;
}

std::optional<Flashcard> Deck::get(size_t card_id) const
{
    if (m_deck.contains(card_id))
        return std::optional<Flashcard>{m_deck.find(card_id)->second};

    return std::nullopt;
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

void Deck::print_deck() const
{
    size_t card_num{1};
    for (auto it{m_deck.begin()}; it != m_deck.end(); ++it, ++card_num)
        std::cout << "\nCard: " << card_num << '\n' << it->second << '\n';
}

enum class Deck::Sort_order
{
    memorization_assending,
    memorization_dissending,
    id_assending,
    id_disssending
};

