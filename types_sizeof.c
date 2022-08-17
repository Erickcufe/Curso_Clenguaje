/* Fundamentals Types and Sizeof */

#include <stdio.h>

int main(void)
{
	int a = 5, b = 7, c = 6; /* declare and initialize variables */
	double average = 0.0; /* good practice */
	char ch = 'e';

	printf("On my system\n");
	printf("int is %lu bytes\n", sizeof(int));
	printf("long int is %lu bytes\n", sizeof(long int));
	printf("char is %lu bytes\n", sizeof(char));
	printf("double is %lu bytes\n", sizeof(double));
	printf("float is %lu bytes\n", sizeof(float));
	printf("long double is %lu bytes\n", sizeof(long double));
	return 0;

}
