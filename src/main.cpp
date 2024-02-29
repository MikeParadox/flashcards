#include "../includes/Flashcard.h"
#include "../includes/Flashcards_deck.h"


int main()
{
    Flashcards_deck f_d;
    f_d.add_flashcard(
        "hello",
        "used as a greeting when you meet somebody, "
        "in an email, when you answer the phone or when you want to attract "
        "somebody's attention");

    f_d.show_flashcard("hello");

    return 0;
}

// TODO use 'emplace' where is possible and sufficient

