#include <stdio.h>
#include <stdlib.h>

int bs(int n, int *vetor) {
	int c = 0, d, troca, trocou = 1;
	int comandos = 0;
	while ((c < (n - 1)) & trocou) {
		trocou = 0;
		for (d = 0; d < n - c - 1; d++){
			if (vetor[d] > vetor[d + 1]) { // COMANDO A SER CONTABILIZADO
				comandos++ ;
				troca = vetor[d];
				vetor[d] = vetor[d + 1];
				vetor[d + 1] = troca;
				trocou = 1; 
			}
		}
		c++;
	}
	return comandos;
}

int main(){
    int v[50];
    for(int i = 0; i<50;i++){
        v[i] = rand() % 100;
    }
    int c = bs(50,v);
    printf("comandos contabilizados = %d\n",c);
    return 0;
}