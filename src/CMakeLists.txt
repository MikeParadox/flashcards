add_library(flashcards ../includes/Flashcard.h ../includes/Flashcards_deck.h
    Flashcard.cpp Flashcards_deck.cpp)
    
add_executable(${PROJECT_NAME} main.cpp)
    
target_link_libraries(${PROJECT_NAME} PUBLIC flashcards)

    