#include <stdio.h>

long long int fatorial(int num){
    if (num == 0) {
        return 1;
    } 
    else if (num < 0) {
        printf("numero menor que 0\n");
    } 
    return num*fatorial(num-1);
}

int main(){
    int n;
    scanf("%d",&n); // maior numero possivel = 20
    long long int fat = fatorial(n);
    printf("%lld\n",fat);
    return 0;
}