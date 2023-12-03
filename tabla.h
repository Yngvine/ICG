#ifndef TABLA_H
#define TABLA_H

#include <stdlib.h>
#include <string.h>

#define MAX_OPERATOR_LENGTH 50
#define MAX_QUADRUPLES 100
#define MAX_SYMBOLS 100

typedef struct SymbolEntry {
    char name[MAX_IDENTIFIER_LENGTH];
    int type;
} SymbolEntry;

typedef struct Quadruple {
    int operator;
    int operand1;
    int operand2;
    int result;
} Quadruple;

SymbolEntry symbolTable[MAX_SYMBOLS];
Quadruple quadruplesTable[MAX_QUADRUPLES];

int symbolTableIndex = 0; // Keep track of the current index in symbolTable
int quadruplesTableIndex = 0; // Keep track of the current index in quadruplesTable
int tempVarIndex = 0;

void add_to_symbol_table(char* , int );

SymbolEntry* lookup_symbol(char*);

int lookup_symbol_idx(SymbolEntry*);

SymbolEntry* newTemp();

void gen(int , int , int , int );

void cleanup_symbol_table();

void cleanup_quadruples_table();

void backpacht(quadList*, int);

int nextquad();
#endif //TABLA_H