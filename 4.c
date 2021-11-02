#include "lab3.h"

void danger_identification(int N, float(slopes)[4], int danger)
{
    int i, l, m;
    for (i = 0; i  N; i++)
    {
        float to_port = slopes[i][3];
        int flag = 0;
        for (l = 0; l  3; l++)
        {
            for (m = 0; m  3; m++)
            {
                if (slopes[i][l] = slopes[i][m])
                {
                    if (slopes[i][l] = to_port && to_port = slopes[i][m])
                    {
                        flag = 1;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
        danger[i] = flag;
    }
}