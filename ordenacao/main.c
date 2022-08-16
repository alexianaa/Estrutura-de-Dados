#include <stdio.h>
#include <stdlib.h>

int main(){
    // ler arquivo
    FILE *fp;
    fp = fopen("municipios.csv","r");
    if(fp == NULL){
        printf("Problemas na CRIACAO do arquivo\n");
        return 0;
    }

    // contar linhas
    int cont = 0;
    char *result;
    char linha[200];

    // criar vetor so com 'populacao 2010'
    long int vetor[cont];
    char stg[100];
    char stg2[40];
    long int populacao[1];
    result = fgets(linha,100,fp); //pega titulos

    fscanf(fp,"%[^;] ; %[^;] ; %[^;] ; %[^;] ; %[^;] ; %[^;] ; %ld ; %[^;] ; %[^;] ; \n",stg,stg,stg,stg,stg,stg, populacao, stg,stg);
    printf("%ld",*populacao);

    /* while (!feof(fp)){
        if(populacao){
            vetor[cont] = *populacao;
            printf("%ld\n",vetor[cont]);
            cont++;
        }
    }  */

    // ordenar vetor
    // contar tempo

    fclose(fp);
    return 0;
}