#include "stdlib.h"
#include "config.h"
#include "stdbool.h"

#include "snake.h"

void createFood(int bg[],int food[2], int nx, int ny){
    if( food[0] == 0){
        food[0] = rand()%(nx-2) + 2;
        food[1] = rand()%(ny-2) + 2;
        bg[food[1]*nx+food[0]] = 2;

    }
}

bool eatFood(int food[2], Snake* snake){
    int x = snake->body[0].x;
    int y = snake->body[0].y;
    if( (food[0]== x) && (food[1] == y) ){
        food[0] = 0;
        food[1] = 0;
        return true;
    }
    return false;
}