//
// Created by joao on 6/5/25.
//

#ifndef LISTA_H
#define LISTA_H


typedef enum Item {
    Pocao = 1,
    Repelente = 2
}Item;

typedef struct stItem {
    //Dados add dps//
    Item item;
    struct stItem *next;
    struct stItem *prev;
}stItem, *ptItem;

typedef struct Lista {
    int tam;
    ptItem inicio;
    ptItem final;
}stLista, *ptLista;

// Funções
ptLista lista_init();

void lista_free(ptLista lista);



// Funções do Item //

void item_descricao(ptLista lista, int id);

void item_usar(ptLista lista, int id);

#endif //LISTA_H
