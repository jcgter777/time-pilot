#ifndef PLAYER_H
#define PLAYER_H

#include "helpers.h"

#include <stdint.h>
#include <graphx.h>

#define MAX_PLAYER_BULLETS 7

typedef struct {
    int8_t dx;
    int8_t dy;
    int8_t velocity;
    
    // bullet stuff
    bool firing;
    uint8_t ctr_bullet;
    uint8_t num_bullet;
    bullet_t bullets[MAX_PLAYER_BULLETS+1];
    int8_t dir;
    
    // this controls where new things will spawn
    int spawn_x_min;
    int spawn_x_len;
    int spawn_y_min;
    int spawn_y_len;
    
    uint8_t index;
    gfx_rletsprite_t *sprite;
} player_t;

extern player_t mplayer;

void update_player(void);

#endif
