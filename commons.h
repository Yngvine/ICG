#ifndef COMMONS_H
#define COMMONS_H

#include <stdbool.h>
#include <stdio.h>

#define MAX_ID_LENGTH 50
#define MAX_LIST_SIZE 100

typedef char ID[MAX_ID_LENGTH];

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

typedef enum {
    O_SUMA = 0,
    O_RESTA = 1,
    O_MUL = 2,
    O_DIVISION = 3,
    O_DIV = 4,
    O_MOD = 5,
    O_MENOR = 6,
    O_MAYOR = 7,
    O_MENORI = 8,
    O_MAYORI = 9,
    O_IGUAL = 10,
    O_DISTINTO = 11,
    O_GOTO = 12,
    O_ITOF = 13,
    O_FTOI = 14,
    O_UMENOS = 15,
    O_ASIGNACION = 22,
    O_ENTRADA = 23,
    O_SALIDA = 24,
    O_SI = 25,
    O_INCREMENTO = 26,
} NombreOperadores;

typedef struct quadList{
    int quads[MAX_LIST_SIZE];
    int size;
} quadList;

typedef struct emanem{
    int quad;
    quadList* next;
} emanem;

typedef struct booleano{
    quadList* FALSE;
    quadList* TRUE;
} Booleano;

quadList* makeList(int );

quadList* noneList();

quadList* merge(quadList* l1, quadList* l2);


void anhadir_a_lista_id(char* id, ListaId_T* );

void inicializar_lista_id(ListaId_T* );

void concatenar_lista_id(ListaId_T* , ListaId_T* );

void liberar_lista_id(ListaId_T* );

bool esta_lista_id_vacia(ListaId_T* );




#endif //COMMONS_H