/*
 Circle and Area
 Sally Coder
 Ago, 03, 2022
*/

#include <stdio.h>

#define PI 3.14159

int main()
{
	double area = 0.0, radius = 0.0; /* area in KM */
	printf("Enter radius: ");
	scanf("%lf", &radius);
	area = PI * radius * radius; // classic formula
	printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
	return 0;
}
