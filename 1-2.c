#include "lab3.h"

void input_triangle(struct fig *triangle) {
	int i;
	scanf("%d %d %d", triangle->apex1.lat.degree, triangle->apex1.lat.minute, triangle->apex1.lat.second);
	scanf("%d %d %d", triangle->apex1.longitude.degree, triangle->apex1.longitude.minute, triangle->apex1.longitude.second);
	scanf("%d %d %d", triangle->apex2.lat.degree, triangle->apex2.lat.minute, triangle->apex2.lat.second);
        scanf("%d %d %d", triangle->apex2.longitude.degree, triangle->apex2.longitude.minute, triangle->apex2.longitude.second);
	scanf("%d %d %d", triangle->apex3.lat.degree, triangle->apex3.lat.minute, triangle->apex3.lat.second);
        scanf("%d %d %d", triangle->apex3.longitude.degree, triangle->apex3.longitude.minute, triangle->apex3.longitude.second);
}
