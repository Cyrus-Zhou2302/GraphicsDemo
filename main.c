#include "raylib.h"
#include <stdlib.h>
#include <stdio.h>
#include "input_box_graphics.h"
#include "map_graphics.h"
#include "quest_graphics.h"
#include "scene_graphics.h"
#include "npc_graphics.h"

int main()
{
    char* buffer = malloc(sizeof(char)*50);

    quest_graphics_t* quest_graphics = new_quest_graphics();

    map_graphics_t* map_graphics = new_map_graphics();

    npc_graphics_t* npc_graphics = ne



    while (1)
    {
        if (IsKeyPressed(KEY_ESCAPE)) {
            break;
        }


        if (IsKeyPressed(KEY_LEFT_CONTROL)||IsKeyPressed(KEY_RIGHT_CONTROL)) {
            if (IsKeyPressed(KEY_))


        }

    }
    return 0;

}