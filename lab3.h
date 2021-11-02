#include <stdio.h>
#include <stdlib.h>

struct coordinates
{
    int degree;
    int minute;
    int second;
};

struct position
{
    struct coordinates lat;
    struct coordinates longitude;    
};

struct fig
{
    struct position apex1;
    struct position apex2;
    struct position apex3;
};

void input_ship(int N, struct position * ship);
void input_triangle(struct fig * triangle);
struct position input_port();

void matrix_of_slopes(int N, struct position * ship, struct fig triangle, struct position port, float (*slopes)[4]);

void danger_identification(int N, float (*slopes)[4], int * danger);

void danger_signal(int N, int * danger);
