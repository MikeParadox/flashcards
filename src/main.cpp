#include "../includes/Deck.h"
#include "../includes/Flashcard.h"

#include <iostream>
#include <string>

char dir_separator();

int main()
{
    Deck deck;
    deck.add("C++", "general purpose programming language");
    deck.add("C#", "object-oriented programming language");
    deck.add("PascalABC", "teaching programming language");
    deck.print_deck();
    std::cout << deck.size() << '\n';

    return 0;
}

