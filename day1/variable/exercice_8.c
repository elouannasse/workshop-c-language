#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int nembre1 , nembre2 , nembre3 , moyennegeometrique ;
    printf("veullez entrer le nembre1 ") ;
    scanf("%d",&nembre1) ;
    printf("veullez entrer le nembre2 ") ;
    scanf("%d",&nembre2) ;
    printf("veullez entrer le nembre3") ;
    scanf("%d",&nembre3) ;
    moyennegeometrique = pow(nembre1 * nembre2 * nembre3 ,1 / 3) ;
    printf("le moyenne est :%d",moyennegeometrique) ;
    

}
