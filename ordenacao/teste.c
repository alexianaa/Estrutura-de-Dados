#include <stdio.h>
#include <stdlib.h>

int main(){
    // ler arquivo
    FILE *fp;
    fp = fopen("teste.csv","r");
    if(fp == NULL){
        printf("Problemas na CRIACAO do arquivo\n");
        return 0;
    }

    char *result;
    char stg[30];
    int stg2[1];
    char stg3[30];
    fgets(stg,30,fp);
    printf("%s",stg);
    fscanf(fp,"%[^;] ; %d ; %[^;] ; \n",stg, stg2, stg3);
    printf("%s %d %s",stg, *stg2, stg3);

    fclose(fp);
    return 0;
}