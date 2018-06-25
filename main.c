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
    printf("1: Inserir Dado\n2: Apresentar Tabela\n3: Sair\n");
    scanf("%d", &op);
    switch (op){
      case 1:
        printf("Dado a ser inserido: ");
        scanf("%s", &dado);
        if(insereTabela(&tabela, chave(dado,tabela.M), dado))
            printf("\nDado inserido!\n");
        else
            printf("\nFalha na inserção do Dado!\n");
        break;
      case 2:
        mostraTabela(&tabela);
        break;
      case 3:
        op=-1;
        break;
      default:
        printf("Opcao Invalida!\n");
        break;
    }
  }
}
