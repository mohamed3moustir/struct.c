
#include <stdio.h>

 struct rectangle{
       char liver[100][100]  ;
       char auteur[100][100];
       int titer;
   }arg;
   
  void nwe_livere(){
 
        printf("enter le A\t");
    scanf(" %[^\n]",arg.liver);
    printf("enter le B\t");
    scanf(" %[^\n]",arg.auteur);
    printf("enter le B\t");
    scanf(" %d",&arg.titer);
    
printf("%s || %s  || %d",arg.liver[0],arg.auteur[0],arg.titer);
       
       
  }
   
   
int main() {
    
    
     struct rectangle arg;
   
    //afichage
   nwe_livere();
     
          
    return 0;
}
