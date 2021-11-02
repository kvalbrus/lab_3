#include "lab3.h"

struct position input_port() {
	struct position port;
	scanf("%d", &port.lat.degree);
	scanf("%d", &port.lat.minute);
	scanf("%d", &port.lat.second);
	scanf("%d", &port.longitude.degree);
	scanf("%d", &port.longitude.minute);
	scanf("%d", &port.longitude.second);
	return port;
}