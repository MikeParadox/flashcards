if(EXISTS "/home/mikhail/programming/c++/projects/flashcards/build/tests/flashcards_tests[1]_tests.cmake")
  include("/home/mikhail/programming/c++/projects/flashcards/build/tests/flashcards_tests[1]_tests.cmake")
else()
  add_test(flashcards_tests_NOT_BUILT flashcards_tests_NOT_BUILT)
endif()