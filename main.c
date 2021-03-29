#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

int main()
{
    Lista* li;
    li = cria_lista();
    int i = 1;
    int opcao;

    //Declaração uma Struct para armazenar e inserir elementos do tipo aluno
    struct aluno dados_aluno;
    while(i == 1){
        system("cls");
        menu();
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                if(lista_cheia(li)){
                    printf("\n\nLista Cheia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\n\nDigite a Matricula: ");
                    scanf("%d", &dados_aluno.matricula);
                    printf("Digite o Nome: ");
                    fseek(stdin,0,SEEK_END);
                    scanf("%[^\n]", dados_aluno.nome);
                    printf("Digite a Nota 01: ");
                    scanf("%f", &dados_aluno.n1);
                    printf("Digite a Nota 02: ");
                    scanf("%f", &dados_aluno.n2);
                    printf("Digite a Nota 03: ");
                    scanf("%f", &dados_aluno.n3);
                    printf("Digite a Nota 04: ");
                    scanf("%f", &dados_aluno.n4);
                    break;
                }
            case 11:
                printf("\n\n\t\tAte Logo !!!\n\n\n\n\n");
                i = 0;
                break;
            default:
                printf("\n\nOpcao Invalida\n\n");
                system("pause");
                break;
        }
    }
    libera_lista(li);
    system("pause");
    printf("\n\n\n\n");
    return 0;
}
