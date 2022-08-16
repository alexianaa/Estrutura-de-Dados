#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int Numero;
    struct Node *Prox;
} TNo;

void Imprime(TNo *pLista)
{
    if (pLista != NULL)
    {
        printf("%d", pLista->Numero);
        Imprime(pLista->Prox);
    }
}

TNo *IncluiCabeca(TNo *pLista, int pValor)
{
    TNo *pNovoNo;
    pNovoNo = (TNo *)malloc(sizeof(TNo));
    pNovoNo->Numero = pValor;
    pNovoNo->Prox = pLista;
    pLista = pNovoNo;
    return pLista;
}

int main()
{
    TNo *head = NULL;
    head = IncluiCabeca(head, 3);
    Imprime(head);

    return 0;
}