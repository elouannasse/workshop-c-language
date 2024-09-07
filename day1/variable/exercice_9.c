#include <stdio.h>
#include <math.h>

int main() {
    float xa , xb , ya , yb , za , zb  , distance ;
    printf("veullez entrer les cordonne de a ,xa,ya,za ") ;
    scanf("%f %f %f",&xa,&ya,&za) ;
    printf("veullez entrer les cordonne de b xb,yb,,zb") ;
    scanf("%f %f",&xb,&yb,&zb) ;
    distance = sqrt(pow(xb - xa,2)+pow(yb-ya,2)+pow(zb-za,2)) ;
    printf("la distance est %.2f",distance) ;
    
    // Write C code here
    

    return 0;
}