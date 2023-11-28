#include <stdbool.h>
#include <stdio.h>
#include "commons.h"



quadList makeList(int quadIndx) {
    quadList newList = (quadList)malloc(sizeof(quadList));
    if (newList == NULL) {
        // Manejo de error si la asignación de memoria falla
        perror("Error al asignar memoria para el nodo");
        exit(EXIT_FAILURE);
    }

    newList.quads[0] = quadIndx;
    newList.size = 1;

    return newList;
}

quadList merge(quadList l1, quadList l2){

    quadList mergedList = (quadList)malloc(sizeof(quadList));
    mergedList.size = 0;

    for (int i = 0; i < l1.size; ++i) {
        mergedList.quads[i] = l1.quads[i];
        mergedList.size++;
    }

    for (int i = 0; i < l2.size; ++i) {
        mergedList.quads[i + l1.size] = l2.quads[i];
        mergedList.size++;
    }

    return mergedList;

}

void freeList(quadList* list){
    free(list);
}

void anhadir_a_lista_id(char* id, ListaId_T* ListaId_T){
    if (ListaId_T->size < MAX_LIST_SIZE) {
        strcpy(ListaId_T->ids[ListaId_T->size++].id, id);
    } else {
        // Handle error: list is full
        fprintf(stderr, "String list is full\n");
        exit(EXIT_FAILURE);
    }
    
}

void inicializar_lista_id(ListaId_T* ListaId_T){
    ListaId_T->size = 0;
}

void liberar_lista_id(ListaId_T* ListaId_T){
    ListaId_T->size = 0;
}

bool esta_lista_id_vacia(ListaId_T* ListaId_T){
    return ListaId_T->size == 0;
}

void volcar_lista_id_a_tabla(ListaId_T* ListaId_T, NombreTipo tipo){
    ListaId_T aux;
    for (int i = 0; i < ListaId_T->size; ++i) {
        add_to_symbol_table(ListaId_T->ids[i], tipo);
    }
}