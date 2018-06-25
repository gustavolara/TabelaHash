typedef struct tabelaHash
{
    char hash[13];
    int M;
} tabelaHash;

int insereTabela(tabelaHash *tabela, int key, char dado);
void criaTabela(tabelaHash *tabela);
int chave(int dado, int M);
void mostraTabela(tabelaHash *tabela);
int buscaElemento(tabelaHash *tabela, char dado);
