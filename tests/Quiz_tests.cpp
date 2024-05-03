#include "../includes/Deck.h"
#include "../includes/Quiz.h"

#include <gtest/gtest.h>

class QuizTest : public testing::Test
{
protected:
    Deck deck;
    Quiz quiz;

    QuizTest()
    {
        deck.add("C++", "General-purpose programming language");
        deck.add("C#", "Cool, feature rich programming language");
        deck.add("PascalABC", "Teaching programming language");
    }
};


