#include <stdbool.h>
#include <stdio.h>
#include "commons.h"



struct Node* makeList(int quad){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        // Manejo de error si la asignación de memoria falla
        perror("Error al asignar memoria para el nodo");
        exit(EXIT_FAILURE);
    }

    newNode->quad = quad;
    newNode->next = NULL;

    return newNode;
}

struct Node* merge(struct Node* l1, struct Node* l2){
    struct Node* current = l1;
    struct Node* mergedList = NULL;
    struct Node* behind = NULL;

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        // Manejo de error si la asignación de memoria falla
        perror("Error al asignar memoria para el nodo");
        exit(EXIT_FAILURE);
    }
    newNode->quad = current->quad;
    newNode->next = NULL;
    behind = newNode;
    mergedList = newNode;
    current = current->next;

    while (current != NULL) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            // Manejo de error si la asignación de memoria falla
            perror("Error al asignar memoria para el nodo");
            exit(EXIT_FAILURE);
        }
        behind->next = newNode;
        newNode->quad = current->quad;
        newNode->next = NULL;
        behind = current;
        current = current->next;
        
    }
    current = l2;
    while (current != NULL) {
        
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            // Manejo de error si la asignación de memoria falla
            perror("Error al asignar memoria para el nodo");
            exit(EXIT_FAILURE);
        }
        behind->next = newNode;
        newNode->quad = current->quad;
        newNode->next = NULL;
        behind = newNode;
        current = current->next;
        
    }

    return mergedList;

}

void freeList(struct Node* head) {
    struct Node* current = head;
    struct Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
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