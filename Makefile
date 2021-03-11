build:
	clang++ -Wall -std=c++17 -I/opt/homebrew/include -I/opt/homebrew/opt/lua@5.3/include -I"./libs/" -L/opt/homebrew/lib -L/opt/homebrew/opt/lua@5.3/lib src/*.cpp -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer -llua5.3 -o gameengine;

run:
	./gameengine

clean:
	rm gameengine