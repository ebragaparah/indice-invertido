all: main

arquivos: clean_arquivos
	gcc arquivos.c -o arquivos

lista_encadeada: clean_lista_encadeada
	gcc lista_encadeada.c -o lista_encadeada

main: clean_main
	gcc main.c -o main

clean_arquivos:
	@rm -rf arquivos

clean_lista_encadeada:
	@rm -rf list_encadeada

clean_main:
	@rm -rf main

clean: clean_arquivos clean_lista_encadeada clean_main
