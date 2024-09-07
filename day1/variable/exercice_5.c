#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperatureencelsius ;
    printf("veullez entrer la la temperature en Celsius ") ;
    scanf("%d",&temperatureencelsius) ;
    if(temperatureencelsius < 0)
        printf("l etat de l'eau est : solid ",temperatureencelsius) ;
    else if( 0 <= temperatureencelsius < 100)
        printf("l etat de l'eau est : liquid ",temperatureencelsius) ;
    else
        printf("l etat de l'eau est : gaz ",temperatureencelsius) ;


    return 0;
}