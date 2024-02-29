#include "../includes/Flashcards_deck.h"

#include <algorithm>

auto Flashcards_deck::find_by_id(const int& id) const
{
    return std::find_if(m_deck.begin(), m_deck.end(),
                        [&](const Flashcard& f) { return f.m_id == id; });
}


// TODO change implementation of the constructors from using vector to map
//  and using new member (ids_to_concepts)

// copy constructor does not copy favourite or num_cards_in_test

Flashcards_deck::Flashcards_deck(const Flashcard& flashcard)
{
    ++m_id;
    m_deck.emplace_back(
        flashcard.m_concept,
        Flashcard{m_id, flashcard.m_concept, flashcard.m_definition});
    // m_ids_and_concepts.emplace(m_id, flashcard.m_concept);
}

Flashcards_deck::Flashcards_deck(Flashcard&& flashcard)
{
    ++m_id;
    m_deck.emplace_back(
        flashcard.m_concept,
        Flashcard{m_id, flashcard.m_concept, flashcard.m_definition});
    // m_ids_and_concepts.emplace(m_id, flashcard.m_concept);
}

Flashcards_deck::Flashcards_deck(const Flashcards_deck& flashcards)
{
    m_id = flashcards.m_id;
    m_deck = flashcards.m_deck;
    // m_ids_and_concepts = flashcards.m_ids_and_concepts;
}

Flashcards_deck::Flashcards_deck(Flashcards_deck&& flashcards)
{
    m_id = flashcards.m_id;
    m_deck = flashcards.m_deck;
    // m_ids_and_concepts = flashcards.m_ids_and_concepts;
}

void Flashcards_deck::add_flashcard(const std::string& con,
                                    const std::string& def)
{
    ++m_id;
    m_deck.emplace(con, Flashcard{m_id, con, def});
    m_ids_and_concepts.emplace(m_id, con);
}


void Flashcards_deck::show_flashcard(const std::string& conc)
{
    auto it{std::find_if(m_deck.begin(), m_deck.end(),
                         [&](const Flashcard& f)
                         { return conc == f.m_concept; })};

    if (it != m_deck.end())
        std::cout << it->m_concept << '\n';
    else
        std::cout << "Card was not found\n";
}

void Flashcards_deck::delete_flashcard(const int id)
{
    auto it{find_by_id(id)};

    if (it != m_deck.end())
        m_deck.erase(it);
    else
        std::cout << "No such card in the deck\n";
}

void Flashcards_deck::set_num_cards_for_test(const int num_cards)
{
    m_num_cards_for_test = num_cards;
}

void Flashcards_deck::show_flashcard(const int& id) const
{
    auto it{find_by_id(id)};

    if (it != m_deck.end())
        std::cout << it->m_concept << '\n';
    else
        std::cout << "Card was not found\n";
}

void Flashcards_deck::add_to_favourites(int id)
{
    m_favourites.emplace_back(id);
}


// TODO implement
void Flashcards_deck::delete_from_favourites(int id) {}

void Flashcards_deck::change_num_cards_for_test(const int& new_number)
{
    m_num_cards_for_test = new_number;
}

