#ifndef GAME_H
#define GAME_H

#include "rayfork.h"

#define SCREEN_WIDTH  (800)
#define SCREEN_HEIGHT (450)

extern void game_init(rf_gfx_backend_init_data* gfx_data);
extern void game_update();
extern void game_resize(int width, int height);

#endif // GAME_H