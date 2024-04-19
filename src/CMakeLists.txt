add_library(Flashcards ../includes/Deck.h Deck.cpp
../includes/Flashcard.h Flashcard.cpp 
# ../includes/Importer.h Importer.cpp
../includes/Quiz.h Quiz.cpp)
    
add_executable(${PROJECT_NAME} main.cpp)
    
target_link_libraries(${PROJECT_NAME} PUBLIC Flashcards)

    