#include <stdio.h>
#include <stdlib.h>

void word2vec(char *ch, FILE *fd){

    // tratamento de acentuacao
    if( (*ch > 32 && *ch < 47) || (*ch > 57 && *ch < 65) || (*ch > 90 && *ch < 97) || (*ch > 122 && *ch < 127) ){
        // desconsiderar pontuacoes
    }else{
        if(*ch == 32){
           fputc("\n",fd);
        }else{
            fputc(*ch,fd);
            printf("%c",*ch);
        }
    }
}

int main(){

    // abrir o arquivo
    FILE *fp, *fd;
    fp = fopen("frase.txt","r");
    fd = fopen("frase_vocabulario.txt","a");
    if(fp == NULL){
        printf("nulo\n");
        system("pause");
        exit(0);
    }else{
        // comecar a ler o arquivo
        char ch;
        char *j = &ch;
        while(1){
            ch = fgetc(fp);
            word2vec(j, fd);
            if(ch == EOF){
                break;
            }
        }
    }
    fclose(fp);
    fclose(fd);
    return 0;
}