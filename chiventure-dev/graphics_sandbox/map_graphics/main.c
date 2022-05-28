#include "raylib.h"
#include "map_graphics.h"
#include <stdlib.h>
#include <stdio.h>


int main(void) {
    //runMapGraphics(); // update this entire function to use new functions
    map_graphics_t info;
    info.WindowPos = (Vector2){200,200};
    info.display_dimensions = (Vector2) {600,600};
    info.image_path = "map_example/simplemap.png";
    info.title = "Just a simple map";
    draw_map_graphics(&info);
    return 0;
}

