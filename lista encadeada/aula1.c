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
        printf("%d\n", pLista->Numero);
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

TNo *IncluiCalda(TNo *pLista, int pValor)
{
    TNo *pNovoNo, *pAux;
    pNovoNo = (TNo *)malloc(sizeof(TNo));
    pNovoNo->Numero = pValor;
    pNovoNo->Prox = NULL;
    pAux = pLista;
    while (pAux->Prox != NULL)
        pAux = pAux->Prox;
    pAux->Prox = pNovoNo;
    return pLista;
}

TNo *IncluiAntes(TNo *pLista, int pChave, int pValor)
{
    TNo *pNovoNo, *pAux;
    pNovoNo = (TNo *)malloc(sizeof(TNo));
    pNovoNo->Numero = pValor;
    pAux = pLista;
    while (pAux->Prox->Numero != pChave)
        pAux = pAux->Prox;
    pNovoNo->Prox = pAux->Prox;
    pAux->Prox = pNovoNo;
    return pLista;
}

TNo *ExcluiCabeca(TNo *pLista)
{
    TNo *pAux;
    pAux = pLista;
    pLista = pLista->Prox;
    free(pAux);
    return pLista;
}

int main()
{
    TNo *head = NULL;
    head = IncluiCabeca(head, 3);
    head = IncluiCalda(head, 5);
    head = IncluiAntes(head, 5, 7);
    head = ExcluiCabeca(head);
    Imprime(head);

    return 0;
}