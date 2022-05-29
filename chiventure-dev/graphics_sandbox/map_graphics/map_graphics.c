#include "map_graphics.h"
#include "raylib.h"
#include <assert.h>


Vector2 getCurrentCoordinate() {
    //Todo
    return GetMousePosition();
}

/* See map_graphics.h for documentation */ 
map_graphics_t* new_map_graphics(char *title, char *image_path)
{
    map_graphics_t *map;
    map = (map_graphics_t*)malloc(sizeof(map_graphics_t));

    map->title = title;
    map->image_path = image_path;

    // needs to be filled -> there should be a call to a gdl function here

    return map;
}

/* See map_graphics.h for documentation */ 
int free_map_graphics(map_graphics_t *map_graphics)
{
    assert(map_graphics!=NULL);
    // this may also need some editing

    free(map_graphics);
    return SUCCESS;
}



/* See map_graphics.h for documentation */
int draw_map_graphics(map_graphics_t* info)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = (int)info->display_dimensions.x;
    const int screenHeight = (int)info->display_dimensions.y;
    int windowposx = (int)info->WindowPos.x;
    int windowposy = (int)info->WindowPos.y;

    InitWindow(screenWidth, screenHeight, info->title);
    SetWindowPosition(windowposx,windowposy);

    Texture2D MapTexture = LoadTexture(info->image_path);

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        Vector2 playerPosition = info->PlayerPosit

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawTexture(MapTexture,(screenWidth-MapTexture.width)/2,(screenHeight-MapTexture.height)/2,RAYWHITE);

            DrawCircleV(playerPosition,10,RED);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
    return SUCCESS;
}


