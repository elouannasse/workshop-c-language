#include <stdio.h>
#include <math.h>

int main() {
    float rayonsphere , volumesphere ;
    const float pi = 3.14 ;
    printf("veullez entrer la valeur de rayon de sphere : ") ;
    scanf("%f",&rayonsphere) ;
    volumesphere = (4/3) * pi * pow(rayonsphere,3) ;
    printf("le volume de spher est :%.2f",volumesphere) ;
    
    // Write C code here
    

    return 0;
}