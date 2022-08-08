/* Coverter miles to kilometers
	Mi primer programa
Erick Cuevas-Fernandez
08 aug 2022
*/
#include <stdio.h>

int main(void)
{
	int miles, kilometers;

	printf("Please enter Miles as an integer");
	scanf("%d", &miles);
	kilometers = miles * 1.6; //note conversion 
	printf("\n %d miles is %d kilometers. \n\n",
	miles, kilometers);
	return 0;
}
