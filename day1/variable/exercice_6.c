#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b ;
    printf("veullez entrer la valeur de a ") ;
    scanf("%d",&a) ;
    printf("veullez entrer la valeur de b ") ;
    scanf("%d",&b) ;
    printf("%d \n",a + b) ;
    printf("%d \n",a - b) ;
    printf("%d \n",a * b) ;
    if(b != 0 ) 
      printf("%f",(float) a / (float) b ) ;
    else 

      printf("la division est impossible ") ;
      return 0 ;
}