#include <stdio.h>

int pot(int base, int x){
    if(x == 1){
        return base;
    }else{
        return base*pot(base,x-1);
    }
}

int main(){
    int base, potencia;
    scanf("%d %d", &base, &potencia);
    printf("%d",pot(base,potencia));
    return 0;
}