//Arquivo ListaSequencial.c
#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

struct lista{
    int qtd;
    struct aluno dados[MAX];
};

Lista* cria_lista(){
    Lista *lulu;
    lulu = (Lista*)malloc(sizeof(struct lista));
    if(lulu != NULL )
        lulu->qtd = 0;
    return lulu;
}

void libera_lista(Lista* li){
    free(li);
}

//Implementando funcao que retorna o tamanho da lista
int tamanho_lista(Lista* li){
    if(li == NULL)
        return -1;
    else
        return li->qtd;
}

int lista_cheia(Lista* li){
    if(li == NULL)
        return -1;
    return (li->qtd == MAX);
}

int lista_vazia(Lista* li){
    if(li == NULL)
        return -1;
    return (li->qtd == 0);
}

//Funcao para Inserir no Final
int insere_lista_final(Lista* li, struct  aluno al){
    if(li == NULL)
        return 0;
    if(li->qtd == MAX){ //Lista Cheia
        printf("\n\nLista Cheia\n\n");
        return 0;
    }
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
}
