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
    if(lista == NULL){
        printf("Lista vazia!\n");
        return;
    }
    for (; lista != NULL; lista = lista->prox) {
        printf("%s\r\n", lista->texto);
    }
}

int remove_elemento(tipo_palavra ** lista, char * texto){
	tipo_palavra * lixo;

//  removendo o primeiro elemento da lista
	if( (*lista)->texto == texto){
		lixo = (*lista);
		*lista = (*lista)->prox;
		free(lixo);
		return 1;
	}

// tentando remover um elemento que nao existe na lista quando a lista só contém 1 elemento

    if( (*lista)->prox == NULL )
        return 0;

//  percorre a lista até que o próximo contenha o texto procurado
	while( (*lista)->prox->texto != texto){
        // caso não encontre o elemento procurado
        if ( (*lista)->prox->prox == NULL)
            return 0;
        *lista = (*lista)->prox;
    }

//  removendo um elemento do fim da lista
    if((*lista)->prox->prox == NULL){
        free( (*lista)->prox);
        (*lista)->prox = NULL;
        return 1;
    }

// removendo um elemento do meio da lista
	lixo = (*lista)->prox;
	(*lista)->prox = (*lista)->prox->prox;
	free(lixo);
	return 1;

}

