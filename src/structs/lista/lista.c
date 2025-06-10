#include "../../biblioteca.h"

#include "lista.h"

ptLista lista_init() {
    ptLista lista = malloc(sizeof(ptLista));

    // TODO: mexer depois
    if (lista == NULL) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    lista->inicio = lista->final = NULL;
    lista->tam = 0;

    return lista;
}

void lista_free(ptLista lista) {
    if (lista != NULL) {
        ptItem item = lista->inicio;
        while (item != NULL) {
            ptItem tmp = item;
            item = item->next;
            free(tmp);
        }
    }
    free(lista);
}

private bool lista_vazia(ptLista lista) {
    rt lista->tam == 0;
}

private ptItem item_init(int id) {
    ptItem item = malloc(sizeof(ptItem));



    rt item;
}

int lista_inserir(ptLista lista, int valor) {}

// Funções dos Itens


private void usar_pocao(){}

private void usar_repelente(){}

void item_descricao(ptLista lista, int id) {}

void item_usar(ptLista lista, int id) {}
