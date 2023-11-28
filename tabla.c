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

SymbolEntry* lookup_symbol(char* name) {
    for (int i = 0; i < symbolTableIndex; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            return &symbolTable[i]; // Found the entry
        }
    }
    return NULL; // Entry not found
}

int lookup_symbol_idx(SymbolEntry* s) {
    for (int i = 0; i < symbolTableIndex; ++i) {
        if (strcmp(symbolTable[i].name, s->name) == 0 && symbolTable[i].type == s->type) {
            return i; // Found the entry
        }
    }
    return NULL; // Entry not found
}

int consulta_tipo_TS(char* name) {
    for (int i = 0; i < symbolTableIndex; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            return symbolTable[i].type; // Found the entry
        }
    }
    return NULL; // Entry not found
}

SymbolEntry* newTemp() {
    if (symbolTableIndex < MAX_SYMBOLS) {
        char nombre[5];
        sprintf(nombre, "t%d", tempVarIndex);
        ++tempVarIndex;
        SymbolEntry* newSymbol = &symbolTable[symbolTableIndex++];
        strncpy(newSymbol->name, nombre, MAX_IDENTIFIER_LENGTH - 1);
        return newSymbol:
    } else {
        // Handle error: symbol table is full
        fprintf(stderr, "Symbol table is full\n");
        exit(EXIT_FAILURE);
    }
}


void gen(char* op, char* operand1, char* operand2, char* result) {
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


void cleanup_symbol_table() {
    symbolTableIndex = 0;
}

void cleanup_quadruples_table() {
    quadruplesTableIndex = 0;
}

void backpacht(quadList* l, int quad){
    for (int i = 0; i < l->size; ++i) {
        quadruplesTable[l->quads[i]].result = quad;
    }   
}

int nextquad(){
    return quadruplesTableIndex;
}