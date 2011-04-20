#include <stdio.h>
#include <stdlib.h>

typedef struct palavra {
    char * texto;
    int ocorrencias;
    struct palavra * prox;
} tipo_palavra;

tipo_palavra * inicia_lista(char * texto) {

    tipo_palavra * palavra;

    palavra = (tipo_palavra *) malloc(sizeof(tipo_palavra));
    palavra->texto = texto;
    palavra->prox = NULL;

    return palavra;
}

void insere_elemento(tipo_palavra * raiz, char * palavra) {

    tipo_palavra * nova_palavra;
    nova_palavra = inicia_lista(palavra);

    while (raiz != NULL) {
        if (raiz->prox != NULL) {
            raiz = raiz->prox;
            continue;
        }
        raiz->prox = nova_palavra;
        break;
    }
}

void imprime_lista(tipo_palavra * lista) {

    for (; lista != NULL; lista = lista->prox) {
        printf("%s\r\n", lista->texto);
    }

}
