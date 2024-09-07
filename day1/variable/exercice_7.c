#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nembre1 , nembre2 , nembre3 , moyen ;
    printf("veullez entrer la valeur de nembre1 ") ;
    scanf("%f",&nembre1) ;
    printf("veullez entrer la valeur de nembre2 ") ;
    scanf("%f",&nembre2) ;
    printf("veullez entrer la valeur de nembre3 ") ;
    scanf("%f",&nembre3) ;
    nembre1*=2 ;
    nembre2*=3 ;
    nembre3*=5 ;
    moyen = (nembre1 + nembre2 + nembre3)  / 10 ;
    printf("la moyen est : %f ",moyen) ;
