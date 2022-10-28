//making a celsius to fahrenheit using symbolic constants

#include <stdio.h>

#define LOWER 0     //should define a symbolic constant in upper case 
#define UPPER 300   //the values LOWER UPPER STEP are symbolic constants and not variables
#define STEP 20

void main()
{
    int fahr;
    for (fahr = LOWER;fahr <= UPPER ; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
    }
}

