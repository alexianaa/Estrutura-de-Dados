#include "VetoresC.h"
#include <stdio.h>

int main(){
    int *Vet1, *Vet3;
    float *Vet2, *Vet4;

    Vet1 = VetInt(100);
    Vet3 = (int*) malloc (100*sizeof(int)); 
    Vet2 = VetFloat(100);
    Vet4 = (float*) malloc (100*sizeof(float)); 

    printf("%d %d\n",sizeof(Vet1),sizeof(Vet2));
    printf("%d %d\n",sizeof(Vet3),sizeof(Vet4));

    free(Vet1);
    free(Vet2);
    free(Vet3);
    free(Vet4);
    
    return 0;
}