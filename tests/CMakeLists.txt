include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)


add_executable(
  flashcards_tests
  Flashcard_tests.cpp
  Deck_tests.cpp
)
target_link_libraries(
  flashcards_tests
  Flashcards  
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(flashcards_tests)
