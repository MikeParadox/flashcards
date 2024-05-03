#include "../includes/Deck.h"
#include "../includes/Flashcard.h"

#include <chrono>
#include <gtest/gtest.h>
#include <sstream>

class DeckTest : public testing::Test
{
protected:
    DeckTest()
    {
        d2.add("concept", "definition");
        for (int i{0}; i < 10; ++i)
        {
            d3.add("concept " + std::to_string(i),
                   "definition" + std::to_string(i));
        }
    }
    Deck d1;
    Deck d2;
    Deck d3;
};

TEST_F(DeckTest, SizeUponCreation) { ASSERT_EQ(0, d1.size()); }

TEST_F(DeckTest, Add)
{
    d1.add("1", "one");
    ASSERT_TRUE(d1.get(1)->get_concept() == "1");
    ASSERT_TRUE(d1.get(1)->get_definition() == "one");
}


TEST_F(DeckTest, SizeAfterAdd)
{
    ASSERT_EQ(0, d1.size());
    ASSERT_EQ(1, d2.size());
    ASSERT_EQ(10, d3.size());
}

TEST_F(DeckTest, Empty)
{
    ASSERT_TRUE(d1.empty());
    ASSERT_FALSE(d2.empty());
    ASSERT_FALSE(d3.empty());
}

TEST_F(DeckTest, Erase)
{
    size_t d1_size_before{d1.size()};
    size_t d2_size_before{d2.size()};
    size_t d3_size_before{d3.size()};

    d1.erase(1);
    d2.erase(1);
    d3.erase(1);
    d3.erase(3);
    d3.erase(10);
    d3.erase(11);

    ASSERT_EQ(d1_size_before, d1.size());
    ASSERT_EQ(d2_size_before - 1, d2.size());
    ASSERT_EQ(d3_size_before - 3, d3.size());
}

TEST_F(DeckTest, Clear)
{
    d1.clear();
    d2.clear();
    d3.clear();

    ASSERT_EQ(0, d1.size());
    ASSERT_EQ(0, d2.size());
    ASSERT_EQ(0, d3.size());
}

TEST_F(DeckTest, CopyAssignmentOperator)
{
    d1 = d3;
    ASSERT_EQ(d1.size(), d3.size());

    d2 = d1;
    ASSERT_EQ(d2.size(), d1.size());
}

TEST_F(DeckTest, MoveAssignmentOperator)
{
    size_t d3_size{d3.size()};
    d1 = std::move(d3);
    ASSERT_EQ(d1.size(), d3_size);

    size_t d1_size{d1.size()};
    d2 = std::move(d1);
    ASSERT_EQ(d2.size(), d1_size);
}

TEST(LoadintTests, DISABLED_TimeMillionItemsCopy)
{
    Deck d = Deck();
    const size_t num_cards{1'000'000};
    for (int i{0}; i < num_cards; ++i)
    {
        d.add(std::to_string(i), std::to_string(i + 1));
    }

    Deck d2 = Deck();

    std::chrono::steady_clock::time_point begin{
        std::chrono::steady_clock::now()};

    d2 = d;

    std::chrono::steady_clock::time_point end{std::chrono::steady_clock::now()};

    std::cout << "Time elapsed copy: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end -
                                                                       begin)
                     .count()
              << '\n';
}

TEST(LoadintTests, DISABLED_TimeMillionItemsMove)
{
    Deck d = Deck();
    const size_t num_cards{1'000'000};
    for (int i{0}; i < num_cards; ++i)
    {
        d.add(std::to_string(i), std::to_string(i + 1));
    }

    Deck d2 = Deck();

    std::chrono::steady_clock::time_point begin{
        std::chrono::steady_clock::now()};

    d2 = std::move(d);

    std::chrono::steady_clock::time_point end{std::chrono::steady_clock::now()};

    std::cout << "Time elapsed move: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end -
                                                                       begin)
                     .count()
              << '\n';
}


