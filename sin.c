#include <stdio.h>
#include <math.h>

int main(void)
{ 
	double number, sine;
	printf("Please enter a number between (0,1)");
	scanf("%lf", &number);
	sine = sin(number);
	printf("\n %lf is the sine function of the number %lf.\n", sine, number);
	return 0;
}
