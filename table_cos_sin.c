/* 
 Prints a table of values for sine and cosine between (0, 1).
 
*/

#include <stdio.h>
#include <math.h> // for sin and cos
#include <conio.h> // for getch
int fun(float value)
{   
    float value;
    for(float i = 0; i <= 1; i = i + value) // value between 0 and 1
    {
    printf("sin(%f) = %f\tcos(%f)=%f\n", i, sin(i), i, cos(i));
    }
}

int main()
{
   float value;
   printf("Enter the desired value between 0 and 1 : ");
   scanf("%f", &value);
   fun(value);
return 0;
}
