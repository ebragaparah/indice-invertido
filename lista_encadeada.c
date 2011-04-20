#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

int main() {

    tipo_palavra * palavra;

    palavra = inicia_lista("oi");
    insere_elemento(palavra, "tchau");
    insere_elemento(palavra, "feliz natal");
    imprime_lista(palavra);
}
