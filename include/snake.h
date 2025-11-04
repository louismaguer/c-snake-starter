#ifndef _SNAKE_H_
#define _SNAKE_H_

#include "config.h"

struct SnakePiece{
    int x;
    int y;
};

struct Snake{
    struct SnakePiece body[SNAKE_LEN];
    int length;
};

typedef struct Snake Snake;

#endif // _SNAKE_H_