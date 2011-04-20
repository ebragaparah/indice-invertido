typedef struct dados_arquivo {
    int quantidade_palavras;
    tipo_palavra * palavra;
    char * nome_documento;
} tipo_dados_arquivo;

tipo_dados_arquivo explode_arquivo(char * arquivo) {

    FILE * arquivo = fopen(arquivo, "r");



}
