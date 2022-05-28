all: quest_graphics test_quest_graphics

Demo: main.c
	cc main.c quest_graphics.c  -L../ -Wl,-rpath,. -framework IOKit -framework Cocoa -framework OpenGL `pkg-config --libs --cflags raylib` -I../ -I../../include/common/ -o quest_graphics

clean:
	rm quest_graphics test_quest_graphics