//h(K) = K mod M

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TabelaHash.h"

int volta;
int insereTabela(tabelaHash *tabela, int key, char dado)
{
    if (tabela->hash[key] == NULL)
    {
        tabela->hash[key] = dado;
        return 1;
    }
    else
    {
        if (volta == tabela->M)
            return 0;
        key = chave(dado + 1, tabela->M);
        insereTabela(tabela, key, dado);
        volta++;
    }
}

void criaTabela(tabelaHash *tabela){
    int i;
    for(i=0;i<tabela->M;i++){
        if(tabela->hash[i]!=NULL)
            tabela->hash[i]=NULL;
    }
}

int chave(int dado, int M)
{
    int num;
    if (dado < 96)
        num = dado - 64;
    else
        num = dado - 96;
    return num % M;
}

void mostraTabela(tabelaHash *tabela)
{
    int i;

    printf("==========================\n");
    for (i = 0; i < tabela->M; i++)
    {
        if (tabela->hash[i] != NULL)
        {
            printf("%c",tabela->hash[i]);
            printf("\n");
        }
        else
        {
            printf("<vazio>\n");
        }
    }
    printf("==========================\n");
}
