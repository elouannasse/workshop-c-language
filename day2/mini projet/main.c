 <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIVERS 100
#define LONGUEUR_MAX_TITRE 100
#define LONGUEUR_MAX_EUTEUR 100

char titre [MAX_LIVERS] [LONGUEUR_MAX_TITRE] ;
char auteur [MAX_LIVERS][LONGUEUR_MAX_EUTEUR] ;
float prix [MAX_LIVERS] ;
int quantite [MAX_LIVERS] ;
int nombredelivers = 0;

void ajouterliver () {
    if(nombredelivers >= MAX_LIVERS) {
      printf("le stok est plin .impossible d'ajouter un liver") ;
      return  ;
}
printf("entrer le titre du liver ") ;
scanf(" %[^\n]",titre[nombredelivers]) ;
printf("entrer le auteur du livre") ;
scanf(" %[^\n]",auteur[nombredelivers]) ;
printf("entrer le prix du liver") ;
scanf("%f",&prix[nombredelivers]) ;
printf("entrer la quantite du stok") ;
scanf("%d",&quantite[nombredelivers]) ;
nombredelivers++ ;
printf("ajouter avec succe \n") ;
}
void afficherliver () {
    if(nombredelivers == 0) {
        printf("aucun liver en stok \n") ;
        return ;
    }
    printf("les livers disponible :\n") ;
    for(int i = 0 ; i < nombredelivers ; i++)
        printf("%d,titre :%s,auteur :%s,prix : %f,quantite:%d",i+1,titre[i],auteur[i],prix[i],quantite[i]) ;
}void reherchelivre() {
    char titrerecherche [LONGUEUR_MAX_TITRE] ;
    printf("entrez le titre du livre") ;
    scanf(" %[^\n]",titrerecherche) ;
    for(int i = 0 ; i < nombredelivers ; i++){
        if(strcmp(titre[i],titrerecherche)== 0){
            printf("titre :%s ,auteur :%s,prix :%f,quantite:%d",titre[i],auteur[i],prix[i],quantite[i]) ;
            return ;
        }
    }
    printf("le liver non trouves \n") ;



}
void mettreajouerquantite () {
    char titremisjour[LONGUEUR_MAX_TITRE] ;
    printf("entrer le titre mettreasjour ") ;
    scanf(" %[^\n]",titremisjour) ;
    for(int i=0 ;i<nombredelivers ; i++) {

        if(strcmp(titre[i],titremisjour)== 0) {
            printf("entrer la nouvelle quantite ");
            scanf("%d",&quantite[i]) ;
            printf("mettre a jouer avec succee \n") ;
            return ;
        }
    }
    printf("liver non trouver \n") ;
}
void supprimerlivre () {
    char titresuppression[LONGUEUR_MAX_TITRE] ;
    printf("entrer le titre supprimer ") ;
    scanf(" %[^\n]",titresuppression) ;

    for(int i = 0 ; i < nombredelivers ; i++) {
        if(strcmp(titre[i],titresuppression)== 0) {
            for(int j= i ; j < nombredelivers - 1 ;j++) {
                strcpy(titre[j],titre[j+1]) ;
                strcpy(auteur[j],auteur[j+1]) ;
                prix[j] = prix[j+1] ;
                quantite [j] = quantite[j+1] ;
            }
            nombredelivers--;
            printf("livre supprimer avec succe \n") ;
            return ;
        }
    }
    printf("liver non trouver  \n") ;
}
void affichertotallivre(){

int total = 0 ;
for(int i = 0 ; i < nombredelivers ; i++)
    total += quantite[i] ;
    printf("le nombre total de livers en stok :%d\n",total);
}















int main()
{
    int choix ;
    while (1) {
            printf("\n gestion de stock de la librairie \n") ;
            printf("1.ajoutter un liver \n") ;
            printf("2.afficher tous les livres \n") ;
            printf("3.recherche un liver \n") ;
            printf("4.mettre ajours la quantite de liver \n") ;
            printf("5.supprimer un liver \n") ;
            printf("6.afficher le nembre total de liver en stok \n") ;
            printf("7.quitter \n") ;
            scanf("%d",&choix) ;
            switch (choix) {
            case 1 :
                ajouterliver () ;
                break ;
            case 2 :
                afficherliver();
                break ;
            case 3 :
                reherchelivre ();
                break ;
            case 4 :
                mettreajouerquantite () ;
                break ;
            case 5 :
                supprimerlivre() ;
                break ;
            case 6 :
                affichertotallivre () ;
                break ;
            case 7 :
                printf("au revouir \n");
                return 0 ;
            default :
                printf("choix invalide.veullez ressayer. \n") ;
            }
    }
    return 0 ;
}




