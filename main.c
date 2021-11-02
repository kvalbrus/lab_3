#include "lab3.h"

int main()
{
    int N = 0;
    struct position * ship;
    struct fig triangle;
    struct position port;
    float slopes[50][4] = {};
    int danger[50];

    scanf("%d", &N);

    ship  = (struct position *) calloc(N, sizeof(position));

    input_ship(N, ship);

}
