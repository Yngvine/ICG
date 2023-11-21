#include "commons.h"

void anhadir_a_lista_id(char* id, ListaId_T* ListaId_T){
    if (ListaId_T->size < MAX_LIST_SIZE) {
        strcpy(ListaId_T->ID[ListaId_T->size++].str, str);
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
        add_to_symbol_table(ListaId_T->ID[i], tipo);
    }
}