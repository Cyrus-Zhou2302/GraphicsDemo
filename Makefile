all: quest_graphics test_quest_graphics

demo: main.c
	cc main.c quest_graphics.c npc_graphics.c map_graphics.c scene_graphics.c -L../ -Wl,-rpath,. -framework IOKit -framework Cocoa -framework OpenGL `pkg-config --libs --cflags raylib` -I../ -Ichiventure-dev/include/common/ -Igraphics_sandbox/input_box_graphics/ -Igraphics_sandbox/scene_graphics/ -Igraphics_sandbox/quest_graphics/ -Igraphics_sandbox/npc_graphics/ -o demo

clean:
	rm quest_graphics test_quest_graphics