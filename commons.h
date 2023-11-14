#ifndef COMMONS_H
#define COMMONS_H

typedef ListaId_T {
    char* id;
    struct ListaId_T* next;
};

void anhadir_a_lista_id(char* id, ListaId_T* lista);

void inicializar_lista_id(ListaId_T* lista);

void liberar_lista_id(ListaId_T* lista);

bool esta_lista_id_vacia(ListaId_T* lista); 

#endif //COMMONS_H