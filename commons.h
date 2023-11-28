#ifndef COMMONS_H
#define COMMONS_H

#include <stdbool.h>
#include <stdio.h>
#include "tabla.h"

#define MAX_ID_LENGTH 50
#define MAX_LIST_SIZE 100
#define EXIT_FAILURE -1

typedef struct {
    char id[MAX_ID_LENGTH];
}ID;

typedef struct ListaId_T {
    ID ids[MAX_LIST_SIZE];
    int size;
}ListaId_T;

typedef enum {
    T_ENTERO = 0,
    T_REAL = 1,
    T_BOOLEANO = 2,
    T_CADENA = 3,
    T_CARACTER = 4,
} NombreTipo;

typedef struct quadList{
    int quads[MAX_LIST_SIZE];
    int size;
} quadList;

typedef struct booleano{
    quadList FALSE;
    quadList TRUE;
} Booleano;

quadList* makeList(int );

quadList* merge(quadList* l1, quadList* l2);


void anhadir_a_lista_id(char* id, ListaId_T* );

void inicializar_lista_id(ListaId_T* );

void liberar_lista_id(ListaId_T* );

bool esta_lista_id_vacia(ListaId_T* );

void volcar_lista_id_a_tabla(ListaId_T* , NombreTipo );

#endif //COMMONS_H