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


void updateGraphics(char* cmd) {



}


void 

int main()
{
    char* buffer = malloc(sizeof(char)*50);

    quest_graphics_t* quest_graphics = new_quest_graphics();

    map_graphics_t* map_graphics = new_map_graphics();

    npc_graphics_t* npc_graphics = new_npc

    //Switching between different windows
    char nowdisplay = 0;


    while (1)
    {
        int pid1 = fork();
        if (pid1 < 0) {

            printf("The first fork failed");

        }


        int pid2 = fork();

        
        if (pid2< 0) {
            printf("The second fork failed");
            break;
        }

        if (pid2 == 0) {

            



        } else {


        }

    }
    return 0;

}