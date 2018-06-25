#include <stdio.h>
#include <stdlib.h>
#include "TabelaHash.h"

int main(int argc, char *argv[])
{
  int op;
  char dado;
  tabelaHash tabela;
  tabela.M=13;
  criaTabela(&tabela);
  while(op!=-1){
    printf("-----------------------\n1: Inserir Dado\n2: Apresentar Tabela\n3: Buscar elemento\n4: Sair\n-----------------------\n");
    scanf("%d", &op);
    switch (op){
      case 1:
        printf("Dado a ser inserido: ");
        scanf("%s", &dado);
        if(insereTabela(&tabela, chave(dado,tabela.M), dado))
            printf("\nDado inserido!\n\n");
        else
            printf("\nLista cheia!\n\n");
        break;
      case 2:
        mostraTabela(&tabela);
        break;
      case 3:
        printf("Dado a ser buscado: ");
        scanf("%s", &dado);
        int indice = buscaElemento(&tabela, dado);
        if (indice > -1)
            printf("\nElemento %c encontrado na posicao %i\n\n", dado, indice);
        else
            printf("\nElemento não encontrado\n\n");
        break;
      default:
        printf("Opcao Invalida!\n");
        break;
    }
  }
}
