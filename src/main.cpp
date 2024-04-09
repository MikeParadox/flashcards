#include "../includes/Deck.h"
#include "../includes/Flashcard.h"

#include <iostream>
#include <string>

char dir_separator();

int main()
{
    Deck deck;
    deck.add("C++", "general purpose programming language");
    deck.show_flashcard(1);
    std::cout << deck.size() << '\n';

    return 0;
}


