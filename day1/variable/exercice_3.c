#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kilometres , yards ;
    printf("veullez entrer la distance en kilometres ") ;
    scanf("%f",&kilometres) ;
    yards = kilometres * 1093.61 ;
    printf("la distance en yards est %.2f",yards) ;

    return 0;
}