#include <stdio.h>
#include <stdlib.h>
// Esta fun��o rearranja o vetor v[0..n-1] em ordem crescente.
//Ref.: https://www.ime.usp.br/~pf/algoritmos/aulas/ordena.html

float insercao(int n, int v[])
{
	float comandos = 0.0;
	for (int j = 1; j < n; ++j) {
		int x = v[j];
		int i;
		for (i = j-1; i >= 0 && v[i] > x; --i){
			v[i+1] = v[i];// COMANDO A SER CONTABILIZADO
			comandos ++;
		v[i+1] = x;
		} 
	}
	return comandos;
}



// Bubble sort algorithm.
// Ref.: https://github.com/kayelserafim/bubble-sort-mpi/blob/main/src/parallel_master.c

float bs(int n, int *vetor) {
	int c = 0, d, troca, trocou = 1;
	float comandos = 0.0;
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
	FILE *fp;
	char linha[50];
	char *result;

	fp = fopen ("testes.txt", "r" );
	if ( fp == NULL )
	{
		printf("Nao foi possivel abrir o arquivo\n");
		system("pause");
		exit(0) ;
	}

	FILE *arq;
	arq = fopen("esforcocompucaional.txt", "wt");  // Cria um arquivo texto para gravação
	if(arq == NULL){
		printf("Problemas na CRIACAO do arquivo\n");
		system("pause");
		exit(0) ;
	}


	int i = 0;
	while ( !feof(fp) )
	{ 
		result = fgets(linha,50,fp);
		int res = atoi(result);
		int v1[res]; // gerar um vetor do tamanho result
		int v2[res];
		for(int a = 0; a<res;a++){ // colocar valores aleatorios nele
			v1[a] = rand() % 100;
			v2[a] = v1[a];
		} 
		float qT = insercao(res, v1); // mandar para o insercao
		float qTi = bs(res, v2); // mandar para bs
		float eB = qT/res; //calcular eB e eI
		float eI = qTi/res;
		fprintf(arq, "%d %c %f %c %f %c", res, ' ', eB, ' ', eI, '\n'); // gerar um novo arquivo
	}
	fclose ( fp );
	fclose ( arq );
	
	return 0;
}


