#include "raylib.h"
#include <stdlib.h>
#include <stdio.h>
#include "input_box_graphics.h"
#include "map_graphics.h"
#include "quest_graphics.h"
#include "scene_graphics.h"
#include "npc_graphics.h"
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>


NUM_THREADS = 7

void updateGraphics(char* cmd) {



}


void 

int main()
{
    char* buffer = malloc(sizeof(char)*50);

    quest_graphics_t* quest_graphics = new_quest_graphics();

    map_graphics_t* map_graphics = new_map_graphics();

    npc_graphics_t* npc_graphics = NewNPCGraphics();

    scene_graphics_t* scene_graphics = new_scene_graphics();

    input_box_graphics_t* input_box_graphics = newInputboxGraphics();


    pthread_t questpt, questpt, mappt,npcpt, scenept, input_boxpt, updatept;

    pthread_create(&graphicspt,NULL,runTaskTreeGraphics,)
    
    return 0;

}