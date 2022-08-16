#ifndef VETORESC_H
#define VETORESC_H
#include <stdlib.h>

int* VetInt(int quant){
    int *Vet1; //Declaração dos ponteiros
    Vet1 = (int*) malloc (quant*sizeof(int)); 
    return Vet1;
}

float* VetFloat(int quant){
    float *Vet1;
    Vet1 = (float*) malloc (quant*sizeof(float)); 
    return Vet1;
}

#endif