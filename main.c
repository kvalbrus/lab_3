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
    
    ship  = (struct position *) calloc(N, sizeof(struct position));

    port = input_port();
    input_ship(N, ship);
    input_triangle(&triangle);

    matrix_of_slopes(N, ship, triangle, port, slopes);
    
    danger_identification(N, slopes, danger);
    danger_signal(N, danger);

    free(ship);

    return 0;
}
