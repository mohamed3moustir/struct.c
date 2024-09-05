#include <stdio.h>

 struct rectangle{
       int A  ;
       int B ;
   }arg;
   
   
   
   
int main() {
    int A;
    int B;
    // Remplissage
     struct rectangle arg;
     printf("enter le A\t");
    scanf("%d",&arg.A );
    printf("enter le B\t");
    scanf("%d",&arg.B);
    //afichage
     arg.A = arg.A+arg.B;
       arg.B = arg.A-arg.B;
       arg.A = arg.A-arg.B;
        printf("A = %d\nB = %d",arg.A,arg.B);
    return 0;
}
