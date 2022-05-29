#include "npc_graphics.h"
#include "raylib.h"
#include <stdlib.h>
#include <stdio.h>

/* A testing input for NPC graphics */
npc_info_t* synthesizeTest() {
    npc_info_t* res;
    res = malloc(sizeof(npc_info_t));
    res->npc_name = "Dhirpal";
    res->head_action = ActionNew("Default","testimages/dhirpal/action/default.png",3,3);
    res->head_line = LineNew("TedTalk", "Welcome to my Ted Talk");
    return res;
}

/* Another testing input for NPC graphics */
npc_info_t* synthesizeTest2() {
    npc_info_t* res;
    res = malloc(sizeof(npc_info_t));
    res->npc_name = "GangnamStyle";
    res->head_action = ActionNew("Dance","testimages/GangnamStyle/Dance/GangnamStyle.png",22,7);
    res->head_line = LineNew("Default", "Let's Dance");
    return res;
}

/* Another testing input for NPC graphics */
npc_info_t* synthesizeTest3() {
    npc_info_t* res;
    res = malloc(sizeof(npc_info_t));
    res->npc_name = "Fire";
    res->head_action = ActionNew("Burn","testimages/Fire/Default/fire.png",6,6);
    res->head_line = LineNew("Crack", "Crack crack...");
    return res;
}

int main(void)
{   
    //npc_info_t* current_npc = synthesizeTest();

    //runNPCGraphics(&current_npc, "Dhirpal", "Default","Tedtalk", (Vector2){800,0},(Vector2){600,400},BLACK);
    //npc_info_t* current_npc = synthesizeTest2();


    //runNPCGraphics(&current_npc, "Dhirpal", "Default","Default", (Vector2){800,0},(Vector2){600,400},BLACK);
    //npc_info_t* current_npc = synthesizeTest2();

    npc_info_t* npc_1 = synthesizeTest();
    npc_info_t* npc_2 = synthesizeTest2();
    npc_info_t* npc_3 = synthesizeTest3();
    npc_info_t* npcs = npc_1;
    npcs->next = npc_2;
    npcs->next->next = npc_3;
    npc_graphics_t npc_graphics = {(Vector2){1200,0},(Vector2){160,500},RED,"Fire","Burn","Crack",npcs};
    runNPCGraphics(&npc_graphics);


    return 0;
}
