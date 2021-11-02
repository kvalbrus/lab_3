#include "lab3.h"

void input_ship(int N, struct position *ship) {
	int i;
	for (i = 0; i < N; i++) {
		scanf("%d %d %d", &ship[i].lat.degree, &ship[i].lat.minute, &ship[i].lat.second);
		scanf("%d %d %d", &ship[i].longitude.degree, &ship[i].longitude.minute, &ship[i].longitude.second);
		if (ship[i].lat.degree < 0 || ship[i].lat.degree > 90 || ship[i].longitude.degree< 0 || ship[i].longitude.degree > 180) {
			printf("\n\nWrong enter, start over from beginning\n\n\n");
			i = 0;
		}
		else
			if (ship[i].lat.minute < 0 || ship[i].lat.minute > 60 || ship[i].lat.second < 0 || ship[i].lat.second > 60 || ship[i].longitude.minute < 0 || ship[i].longitude.minute > 60 || ship[i].longitude.second < 0 || ship[i].longitude.second > 60) {
				printf("\n\nWrong enter, start over from beginning\n\n\n");
				i = 0;
			}
	}
}
