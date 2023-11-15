#include "commons.h"

void anhadir_a_lista_id(char* id, ListaId_T* lista){
    ListaId_T* nuevo = (ListaId_T*)malloc(sizeof(ListaId_T));
    if (!nuevo) {
        // Handle memory allocation error
        fprintf(stderr, "Memory allocation error for symbol table entry\n");
        exit(EXIT_FAILURE);
    }

    // Allocate memory for the string
    nuevo->id = (char*)malloc((strlen(id) + 1) * sizeof(char));
    if (!nuevo->id) {
        // Handle memory allocation error
        fprintf(stderr, "Memory allocation error for id\n");
        exit(EXIT_FAILURE);
    }

    strcpy(nuevo->id, id);
    nuevo->next = lista;
    lista = nuevo;
}

void inicializar_lista_id(ListaId_T* lista){
    lista = NULL;
}

void liberar_lista_id(ListaId_T* lista){
    ListaId_T* aux;
    while (lista != NULL) {
        aux = lista;
        lista = lista->next;
        free(aux->id);  // Free the id string
        free(aux);
    }
}

bool esta_lista_id_vacia(ListaId_T* lista){
    return lista == NULL;
}

void volcar_lista_id_a_tabla(ListaId_T* lista, NombreTipo tipo){
    ListaId_T* aux;
    while (!esta_lista_id_vacia(lista)) {
        aux = lista;
        lista = lista->next;
        add_to_symbol_table(aux->id, tipo);
        free(aux->id);  // Free the id string
        free(aux);
    }
}