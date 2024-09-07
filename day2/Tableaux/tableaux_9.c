#include <stdio.h>
#include <stdio.h>
int main() {
   int size;
    printf("Saiser le size de tableaux : ");
    scanf("%d",&size);
    int tableaux[size];
    for (int i = 0; i < size; i++){
        printf("Saiser le %d element de tableaux : ",i+1);
        scanf("%d",&tableaux[i]);
    }
    printf("{");
    for (int i = size ; i > 0; i--){
        printf(" %d ",tableaux[i-1]);
    }
    printf("}");
    

    return 0;
}