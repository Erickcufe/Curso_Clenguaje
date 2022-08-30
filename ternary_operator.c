/* ternary operator and flow of control 
 */

#include <stdio.h>
int main()
{	
	int speed;
	printf("\nEnter the speed of the vehicle as an integer: ");
	scanf("%d", &speed);
	speed = (speed <= 65)? (65) : (speed <= 70)? (70): (90);
	switch(speed)
	{
		case 65:
			printf("\nSpeed is 65 mph: No spreed ticket");
			break;
		case 70:
			printf("\nSpeed is 70 mph: Spreed ticket");
			break;
		case 90:
			printf("\nSpeed is 90 mph: Expensive ticket");
			break;
		default:
			printf("\nSpeed is not 65, 70 or 90 mph");
	}
	return 0;
}
