#include "../includes/flashcards_deck.h"

Flashcards_deck::Flashcards_deck(const Flashcard& flashcard)
{
    ++m_id;
    m_deck.push_back({flashcard.m_concept, flashcard.m_definition, m_id});
}

Flashcards_deck::Flashcards_deck(Flashcard&& flashcard)
{
    ++m_id;
    m_deck.push_back({flashcard.m_concept, flashcard.m_definition, m_id});
}

Flashcards_deck::Flashcards_deck(const Flashcards_deck& flashcards)
{
    m_id = flashcards.m_id;
    m_deck = flashcards.m_deck;
}

Flashcards_deck::Flashcards_deck(Flashcards_deck&& flashcards)
{
    m_id = flashcards.m_id;
    m_deck = flashcards.m_deck;
}

// creates a new flashcard
void Flashcards_deck::add_flashcard(const std::string& con,
                                    const std::string& def)
{
    m_deck.push_back({con, def, m_id});
    ++m_id;
}


