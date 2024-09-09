#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_contacts 100

typedef struct {
    char nom [50] ;
    char telephone [50] ;
    char email [50] ;
} contact ;
contact contacts [MAX_contacts] ;
int nombrecontacts = 0 ;

void ajoutercontacte () {
    if(nombrecontacts < MAX_contacts) {
        contact nouveaucontact ;
        printf("entrer le nom ") ;
        scanf("%s",nouveaucontact.nom) ;
        printf("entrer le numero de telephone ") ;
        scanf("%s",nouveaucontact.telephone);
        printf("entrer le email ");
        scanf("%s",nouveaucontact.email);
        contacts [nombrecontacts] = nouveaucontact ;
        nombrecontacts++;
        printf("ajoutter avec succe . \n") ;
    }else{
        printf("le caranet de contacte est plin \n") ;
    }
    }
void recherchecontact () {
    char nomrecherche [50] ;
    printf("entre le nom a rechercher ") ;
    scanf("%s",nomrecherche) ;
    for(int i = 0 ; i < nombrecontacts ; i++) {

        if(strcmp(contacts[i].nom,nomrecherche)== 0) {
            printf("nom : %s \n",contacts[i].nom) ;
            printf("telephone : %s \n",contacts[i].telephone) ;
            printf("email :%s \n",contacts[i].email) ;
            return ;
        }
    }
    printf("le cantact non trouvé \n");
}
void modifiercontact () {
    char nomrecherche [50] ;
    printf("entre le nom recherche  ");
    scanf("%s",nomrecherche) ;
    for(int i = 0 ; i < nombrecontacts ; i++ ) {
        if(strcmp(contacts[i].nom,nomrecherche)== 0) {
            printf("entrer le noveau nom ") ;
            scanf("%s",contacts[i].nom) ;
            printf("entrer le nouveau telephone ") ;
            scanf("%s",contacts[i].telephone) ;
            printf("entrer le nouveau email ") ;
            scanf("%s",contacts[i].email) ;
            printf("modifier avec succe \n") ;
            return ;
        }
    }
    printf("le contacte non trouvé \n") ;

}
void supprimercontact () {
    int nomrecherch ;
    printf("entrer le nom recherche ") ;
    scanf("%s",nomrecherch);
    for(int i = 0 ; i < nombrecontacts ; i++) {
            if(strcmp(contacts[i].nom,nomrecherch)== 0) {
                for(int j = i ; j < nombrecontacts - 1 ; j++) {
                    contacts[j] = contacts[j+1];
                }
                nombrecontacts-- ;
                printf("supprimer avec succe \n") ;
                return ;
            }
    }
    printf("le contacte non trouvé \n") ;
}
void affichercontact () {
    if(nombrecontacts == 0) {
        printf("aucun contact afficher \n") ;
        return ;
    }
    for(int i = 0 ; i < nombrecontacts ; i++ ) {
        printf("le nom : %s \n",contacts[i].nom) ;
        printf("le telephone : %s \n",contacts[i].telephone) ;
        printf("le email : %s \n",contacts[i].email) ;
        printf("----------------- \n") ;
    }
}





































int main()
{
    int choix ;
    do {
            printf("\n carnet de cantact \n ") ;
            printf("1.ajouter un cantact \n") ;
            printf("2.rechercher un cantact \n") ;
            printf("3.modifier un contact \n") ;
            printf("4.supprimer un contact \n") ;
            printf("5.afficher un contact \n") ;
            printf("6.quitter le programme \n") ;
            scanf("%d",&choix) ;
            system("cls");

    switch(choix) {
    case 1 :
           ajoutercontacte () ;
           break ;
    case 2 :
           recherchecontact () ;
           break ;
    case 3 :
          modifiercontact () ;
          break ;
    case 4 :
          supprimercontact () ;
          break ;
    case 5 :
          affichercontact () ;
          break ;
    case 6 :
          printf("quitter le programme \n") ;
          break ;
    default :
          printf("choix invalide \n") ;
          break ;
    }
    }while(choix != 6) ;


















    return 0;
    }

