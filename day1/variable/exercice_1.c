#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nom [100] ;
    char prenom [100] ;
    char sex ;
    char email  [20] ;
    int age ;
    printf("veullez entrer le nom : ") ;
    scanf(" %[^\n]",nom) ;
    printf("veullez entrer le prenom : ") ;
    scanf(" %[^\n]",prenom) ;
    printf("veullez entrer le sex (M/F)") ;
    scanf(" %c",&sex) ;
    printf("veullez entrer le email : ") ;
    scanf("%s",email) ;
    printf("entrer l'age :  ") ;
    scanf("%d",&age) ;
    printf("\n les information personnel est \n") ;
    printf("le nom : %s \n",nom) ;
    printf("le prenom : %s \n",prenom) ;
    printf("le sex est : %c \n",sex) ;
    printf("email est : %s  \n",email) ;
    printf("l'age est : %d \n",age);
    return 0 ;
}