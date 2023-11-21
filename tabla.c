#include "tabla.h"
#include <stdlib.h>

void add_to_symbol_table(char* name, int type) {
    if (symbolTableIndex < MAX_SYMBOLS) {
        SymbolEntry* newSymbol = &symbolTable[symbolTableIndex++];
        strncpy(newSymbol->name, name, MAX_IDENTIFIER_LENGTH - 1);
        newSymbol->type = type;
    } else {
        // Handle error: symbol table is full
        fprintf(stderr, "Symbol table is full\n");
        exit(EXIT_FAILURE);
    }
}

SymbolEntry* lookup_symbol(char* name, int type) {
    for (int i = 0; i < symbolTableIndex; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].type == type) {
            return &symbolTable[i]; // Found the entry
        }
    }
    return NULL; // Entry not found
}

void add_quadruple(char* op, char* operand1, char* operand2, char* result) {
    if (quadruplesTableIndex < MAX_QUADRUPLES) {
        Quadruple* newQuadruple = &quadruplesTable[quadruplesTableIndex++];
        strcpy(newQuadruple->operator, op);
        strcpy(newQuadruple->operand1, operand1);
        strcpy(newQuadruple->operand2, operand2);
        strcpy(newQuadruple->result, result);
    } else {
        // Handle error: symbol table is full
        fprintf(stderr, "Symbol table is full\n");
        exit(EXIT_FAILURE);
    }
}

Quadruple* lookup_quadruple(char* op, char* operand1, char* operand2, char* result) {
    for (int i = 0; i < quadruplesTableIndex; ++i) {
        if (strcmp(quadruplesTable[i].operator, op) == 0 &&
            strcmp(quadruplesTable[i].operand1, operand1) == 0 &&
            strcmp(quadruplesTable[i].operand2, operand2) == 0 &&
            strcmp(quadruplesTable[i].result, result) == 0) {
            return &quadruplesTable[i]; // Found the entry
        }
    }
    return NULL; // Entry not found
}

void cleanup_symbol_table() {
    symbolTableIndex = 0;
}

void cleanup_quadruples_table() {
    quadruplesTableIndex = 0;
}