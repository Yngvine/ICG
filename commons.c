#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "commons.h"



quadList* makeList(int quadIndx) {
    quadList* newList = (quadList*)malloc(sizeof(quadList));
    if (newList == NULL) {
        // Handle error if memory allocation fails
        perror("Error allocating memory for the node");
        exit(EXIT_FAILURE);
    }

    newList->quads[0] = quadIndx;
    newList->size = 1;

    return newList;
}

quadList* merge(quadList* l1, quadList* l2) {
    quadList* mergedList = (quadList*)malloc(sizeof(quadList));
    if (mergedList == NULL) {
        // Handle error if memory allocation fails
        perror("Error allocating memory for the node");
        exit(EXIT_FAILURE);
    }

    mergedList->size = 0;

    for (int i = 0; i < l1->size; ++i) {
        mergedList->quads[i] = l1->quads[i];
        mergedList->size++;
    }

    for (int i = 0; i < l2->size; ++i) {
        mergedList->quads[i + l1->size] = l2->quads[i];
        mergedList->size++;
    }

    return mergedList;
}

void freeList(quadList* list){
    free(list);
}

void anhadir_a_lista_id(char* id, ListaId_T* ListaId_T){
    if (ListaId_T->size < MAX_LIST_SIZE) {
        strcpy(ListaId_T->ids[ListaId_T->size++], id);
    } else {
        // Handle error: list is full
        fprintf(stderr, "String list is full\n");
        exit(EXIT_FAILURE);
    }
    
}

void inicializar_lista_id(ListaId_T* ListaId_T){
    ListaId_T->size = 0;
}

void concatenar_lista_id(ListaId_T* ListaId_T1, ListaId_T* ListaId_T2){
    for (int i = 0; i < ListaId_T2->size; ++i) {
        anhadir_a_lista_id(ListaId_T2->ids[i], ListaId_T1);
    }
}

void liberar_lista_id(ListaId_T* ListaId_T){
    ListaId_T->size = 0;
}

bool esta_lista_id_vacia(ListaId_T* ListaId_T){
    return ListaId_T->size == 0;
}

