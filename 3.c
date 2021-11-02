#include "lab3.h"

void danger_identification(int N, float(*slopes)[4], int *danger)
{
    int i = 0, j = 0, flag = 0;
    float max = 0, min = 0;

    for (i = 0; i < N; i++, danger[i] = 0)
    {
	min = slopes[i][0];
	max = slopes[i][0];

	for(j = 0; j < 3; j++)
	{
	    if(slopes[i][j] < min) min = slopes[i][j]; 
	    if(slopes[i][j] > max) max = slopes[i][j];   
	}

	if(slopes[i][3] >= min && slopes[i][3] <= max) danger[i] = 1;
    }
}
