#ifndef FOOD_H
#define FOOD_H


#include "stdbool.h"
#include "snake.h"


void createFood(int bg[],int food[2], int nx, int ny);
bool eatFood(int food[2], Snake* snake);

#endif // FOOD_H