/* The following program is suppose to use the sin() function in the math library and write out an input's absolute value over an interval. */
#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
double interval;
int i;
for(i = 0; i <30; i++)
{
 interval = i/10.0;
 printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));
}


printf("\nIn the interval the sine is %lf\n", fabs(sin(interval)));
return 0;
}
