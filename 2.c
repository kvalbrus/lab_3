#include "lab3.h"

void matrix_of_slopes(int N, struct position * ship, struct fig triangle,
		struct position port, float (*slopes)[4])
{
    int i = 0, j = 0;
    int lat = 0, lon = 0, latShip = 0, lonShip = 0; 

    for(i = 0; i < N; i++)
    {
	latShip = ((ship[i].lat).degree * 3600) + ((ship[i].lat).minute * 60)
	       	+ ((ship[i].lat).second);

	lonShip = ((ship[i].longitude).degree * 3600) + ((ship[i].longitude).minute * 60)
		+ ((ship[i].longitude).second);

	lat = triangle.apex1.lat.degree * 3600 + triangle.apex1.lat.minute * 60 
		+ triangle.apex1.lat.second;

	lon = triangle.apex1.longitude.degree * 3600 + triangle.apex1.longitude.minute * 60
		+ triangle.apex1.longitude.second;

	slopes[i][0] = (float) (lat - latShip) / (float) (lon - lonShip);


	lat = triangle.apex2.lat.degree * 3600 + triangle.apex2.lat.minute * 60 
		+ triangle.apex2.lat.second;

	lon = triangle.apex2.longitude.degree * 3600 + triangle.apex2.longitude.minute * 60
		+ triangle.apex2.lat.second;

	slopes[i][1] = (float) (lat - latShip) / (float) (lon - lonShip);

        	
	lat = triangle.apex3.lat.degree * 3600 + triangle.apex3.lat.minute * 60 
		+ triangle.apex3.lat.second;

	lon = triangle.apex3.longitude.degree * 3600 + triangle.apex3.longitude.minute * 60
		+ triangle.apex3.lat.second;

	slopes[i][2] = (float) (lat - latShip) / (float) (lon - lonShip);

	
	lat = port.lat.degree * 3600 + port.lat.minute * 60 
		+ port.lat.second;

	lon = port.longitude.degree * 3600 + port.longitude.minute * 60
		+ port.lat.second;

	slopes[i][3] = (float) (lat - latShip) / (float) (lon - lonShip);
    }
}
