/* C For Everyone
mage to K&R
 Conversion of Fahrenheit to Celsius

	C = (F -32)/1.8
	Sally Coder
	Aug 08, 2022
*/
#include <stdio.h>
int main(void)
{
	
	int fahrenheit, celsius;

	printf("Please enter fahrenheit as an integer:");
	scanf("%d", &fahrenheit);
	celsius = (fahrenheit - 32)/1.8; //note conversion
	printf("\n %d fahrenheit is %d celsius.\n",
		fahrenheit, celsius);
	return 0;
}
