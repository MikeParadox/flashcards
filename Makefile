compile:
	$(MAKE) -C ./build
run:
	./build/flashcards
valgrind:
	valgrind --leak-check=yes ./build/flashcards
test:
	./build/flashcards_tests
multitest:
	./build/flashcards_tests --gtest_repeat=100
filtered_tests:
	./build/flashcards_tests --gtest_filter=*