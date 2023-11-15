#ifndef COMMONS_H
#define COMMONS_H

typedef ListaId_T {
    char* id;
    struct ListaId_T* next;
};

typedef enum {
    T_ENTERO = 0,
    T_REAL = 1,
    T_BOOLEANO = 2,
    T_CADENA = 3,
    T_CARACTER = 4,
} NombreTipo;

void anhadir_a_lista_id(char* id, ListaId_T* lista);

void inicializar_lista_id(ListaId_T* lista);

void liberar_lista_id(ListaId_T* lista);

bool esta_lista_id_vacia(ListaId_T* lista);

void volcar_lista_id_a_tabla(ListaId_T* lista, NombreTipo tipo);

#endif //COMMONS_H