#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celuis , kelvin  ;
    printf("veullez saisi la temperature en celuis ") ;
    scanf("%f",&celuis) ;
    kelvin = (celuis + 273.15) ;
    printf("la temperature en kelvin est : %.2f \n",kelvin) ;
    return 0;
}