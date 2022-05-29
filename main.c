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


struct input_box_args {
    input_box_graphics_t* grafix;
    char* buffa;
};
    
struct updateargs {


}


int main()
{
    char* buffer = malloc(sizeof(char)*50);

    quest_graphics_t* quest_graphics = new_quest_graphics();

    map_graphics_t* map_graphics = new_map_graphics();

    npc_graphics_t* npc_graphics = NewNPCGraphics();

    scene_graphics_t* scene_graphics = new_scene_graphics();

    input_box_graphics_t* input_box_graphics = newInputboxGraphics();

    struct input_box_args* input_bourx = (struct input_box_args *)malloc(sizeof(struct input_box_args));
    input_bourx->buffa = buffer;
    input_bourx->grafix = input_box_graphics;

    pthread_t questpt, mappt,npcpt, scenept, input_boxpt, updatept;

    pthread_create((&questpt),NULL,runTaskTreeGraphics,quest_graphics);
    pthread_create((&mappt),NULL,draw_map_graphics,map_graphics);
    pthread_create((&npcpt),NULL, runNPCGraphics,npc_graphics);
    pthread_create((&scenept),NULL, draw_scene_graphics,scene_graphics);
    pthread_create((&input_boxpt),NULL, runTaskTreeGraphics,input_bourx);
    pthread_create((&updatept),NULL, runTaskTreeGraphics,NULL);

    pthread_join(questpt);
    pthread_join(mappt);
    pthread_join(npcpt);
    pthread_join(scenept);
    pthread_join(input_boxpt);
    pthread_join(updatept);

    freeInputboxGraphics(input_box_graphics);
    free_scene_graphics(scene_graphics);
    FreeNPCGraphics(npc_graphics);
    free_quest_graphics(quest_graphics);
    free(input_bourx);
    free_map_graphics(map_graphics);
    return 0;

}