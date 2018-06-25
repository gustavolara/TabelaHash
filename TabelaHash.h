typedef struct tabelaHash
{
    char hash[13];
    int M;
} tabelaHash;


int insereTabela(tabelaHash *tabela, int key, char dado);
int chave(int dado, int M);
void mostraTabela(tabelaHash *tabela);
void criaTabela(tabelaHash *tabela);
