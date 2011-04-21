#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

//Arquivo para testar as funções da biblioteca lista_encadeada.h

int main() {

    tipo_palavra * palavra;

    palavra = inicia_lista("oi");
    insere_elemento(palavra, "tchau");
    insere_elemento(palavra, "feliz natal");
    imprime_lista(palavra);
	printf("-----\n");

	remove_elemento(&palavra, "oi");
	imprime_lista(palavra);
	printf("-----\n");

	remove_elemento(&palavra, "nao existe");
	imprime_lista(palavra);
	printf("-----\n");

	remove_elemento(&palavra, "tchau");
	imprime_lista(palavra);
	printf("-----\n");

	remove_elemento(&palavra, "nao existe");
	imprime_lista(palavra);
	printf("-----\n");

	remove_elemento(&palavra, "feliz natal");
	imprime_lista(palavra);
	printf("-----\n");

}

