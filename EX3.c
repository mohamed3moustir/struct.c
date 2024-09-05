// Online C compiler to run C program online
#include <stdio.h>

 struct rectangle{
       int longueur  ;
       int largeur ;
   }arg;
   
int main() {
    int A;
    // Remplissage
     struct rectangle arg;
     printf("enter le A\t");
    scanf("%d",&arg.longueur );
    printf("enter le B\t");
    scanf("%d",&arg.largeur);
    //afichage
     A = arg.longueur*arg.largeur;
    printf(" l'aire du rectangle %d",A);
    return 0;
}
