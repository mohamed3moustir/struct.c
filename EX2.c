#include <stdio.h>
struct personne{
    char nom[50][50];
    char prenom[50][50];
    int notes[50];
}pre;
int main() {

    // Write C code here
    struct personne pre;
        int num_std=2;
    for(int i=0;i<num_std;i++){
    printf("evter nom personne\t");
    scanf(" %[^\n]s",pre.nom[i]);
     printf("evter prenom personne\t");
    scanf(" %[^\n]s",pre.prenom[i]);
     printf("evter notes personne\t");
    scanf("%d",&pre.notes[i]);
   
}
for(int i=0;i<num_std;i++){
    printf("nom %s ||prenom %s ||notes %d \n",pre.nom[i],pre.prenom[i],pre.notes[i]);
}
    return 0;
}
