#include "../includes/Deck.h"

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



