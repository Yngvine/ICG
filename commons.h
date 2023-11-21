#ifndef COMMONS_H
#define COMMONS_H

#define MAX_ID_LENGTH 50
#define MAX_LIST_SIZE 100

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


void anhadir_a_lista_id(char* id, ListaId_T* ListaId_T);

void inicializar_lista_id(ListaId_T* ListaId_T);

void liberar_lista_id(ListaId_T* ListaId_T);

bool esta_lista_id_vacia(ListaId_T* ListaId_T);

void volcar_lista_id_a_tabla(ListaId_T* ListaId_T, NombreTipo tipo);

#endif //COMMONS_H