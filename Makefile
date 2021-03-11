build:
	clang++ -Wall -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib src/*.cpp -lSDL2 -llua5.4 -o gameengine;

run:
	./gameengine

clean:
	rm gameengine