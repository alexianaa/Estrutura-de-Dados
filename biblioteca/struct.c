#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* struct Pessoa 
{
    char nome[100];
    int idade;
    char sexo;
    float altura;
} julia; */

typedef struct
{
    char nome[100];
    int idade;
    char sexo;
    float altura;
} Novapessoa;

void SetNovaPessoa(Novapessoa *p, char nomePessoa[100], int idade, char sexo, float altura)
{
    strcpy((*p).nome, nomePessoa);
    (*p).idade = idade;
    (*p).sexo = sexo;
    (*p).altura = altura;
}

void printPessoa(Novapessoa p)
{
    printf("nome: %s\nidade: %d\nsexo: %c\naltura: %.2f\n", p.nome, p.idade, p.sexo, p.altura);
}

int main()
{
    Novapessoa julia;
    SetNovaPessoa(&julia, "Julia Abreu de Lima Rocha", 20, 'f', 1.67);
    printPessoa(julia);
    Novapessoa convidados[5];

    printf("Aniversario da julia!! ela esta fazendo %d anos\n", ++julia.idade);
    Novapessoa lavinia;
    SetNovaPessoa(&lavinia, "Lavinia Abreu Machado dos Santos", 15, 'f', 1.60);
    convidados[0] = lavinia;
    printf("primeiro convidado:\n");
    printPessoa(convidados[0]);

    /*Novapessoa *julia = (Novapessoa*)malloc(1*sizeof(Novapessoa));
    strcpy(julia->nome, "Julia Abreu de Lima Rocha");
    julia->idade = 20;
    julia->sexo = 'f';
    julia->altura = 1.67;
    printf("nome: %s\nidade: %d\nsexo: %c\naltura: %.2f\n",julia->nome,julia->idade,julia->sexo,julia->altura);
    */
    return 0;
}