#include <stdio.h>

int tamstring(char string[], int i, int cont){
    if(i<100){
        if(string[i] != 0){
            cont++;
        }
        return tamstring(string, i+1, cont);
    }else{
        return cont;
    }
}

int main(){
    char string[100];
    for (size_t i = 0; i < 100; i++)
    {
        string[i] = 0;
    }
    
    gets(string);
    //printf("%s\n",string);
    printf("%d",tamstring(string, 0, 0));
    return 0;
}