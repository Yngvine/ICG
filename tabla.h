#ifndef TABLA_H
#define TABLA_H

#include <stdlib.h>

typedef struct SymbolEntry {
    char name[MAX_IDENTIFIER_LENGTH];
    int type;
    struct SymbolEntry* next;
} SymbolEntry;

SymbolEntry* symbolTable = NULL;

void add_to_symbol_table(char* , int );

SymbolEntry* lookup_symbol(char* , int );

typedef struct Quadruple {
    char operator[MAX_OPERATOR_LENGTH];
    char operand1[MAX_OPERAND_LENGTH];
    char operand2[MAX_OPERAND_LENGTH];
    char result[MAX_OPERAND_LENGTH];
    struct Quadruple* next;
} Quadruple;

Quadruple* quadruplesTable = NULL;

void add_quadruple(char* , char* , char* , char* );

Quadruple* lookup_quadruple(char* , char* , char* , char* );

void cleanup_symbol_table();

void cleanup_quadruples_table();

#endif //TABLA_H