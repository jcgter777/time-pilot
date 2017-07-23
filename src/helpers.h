#ifndef HELPERS_H
#define HELPERS_H

#include <stdint.h>

typedef struct {
    int x;
    int y;
    int dx;
    int dy;
} bullet_t;

extern int8_t rdx[];
extern int8_t rdy[];

#define update_global(p) \
    do { p->y -= mplayer.dy; p->x -= mplayer.dx; } while (0)
#define update_local(p) \
    do { p->y += p->dy; p->x += p->dx; } while (0)

#endif
