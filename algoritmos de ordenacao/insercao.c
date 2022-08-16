#include <stdio.h>
#include <stdlib.h>

int insercao(int n, int v[])
{
	int comandos = 0;
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

int main(){
    int v[50];
    for(int i = 0; i<50;i++){
        v[i] = rand() % 100;
    }
    int c = insercao(50,v);
    printf("comandos contabilizados = %d\n",c);
    return 0;
}