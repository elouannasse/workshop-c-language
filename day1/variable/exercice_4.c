#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kilometresparhour , metreparsecand  ;
    printf("veullez entrer la vitsse en kilometres par hour ") ;
    scanf("%f",&kilometresparhour) ;
    metreparsecand = kilometresparhour * 0.27778 ;
    printf("la vitesse en metres par secand : %.2f",metreparsecand) ;

    return 0;
}