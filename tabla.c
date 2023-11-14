#include "tabla.h"
#include <stdlib.h>

void add_to_symbol_table(char* name, int type) {
    SymbolEntry* newSymbol = (SymbolEntry*)malloc(sizeof(SymbolEntry));
    if (!newSymbol) {
        // Handle memory allocation error
        fprintf(stderr, "Memory allocation error for symbol table entry\n");
        exit(EXIT_FAILURE);
    }

    strcpy(newSymbol->name, name);
    newSymbol->type = type;
    newSymbol->next = symbolTable;
    symbolTable = newSymbol;
}

SymbolEntry* lookup_symbol(char* name) {
    SymbolEntry* current = symbolTable;
    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            return current;  // Found the entry
        }
        current = current->next;
    }
    return NULL;  // Entry not found
}

void add_quadruple(char* op, char* operand1, char* operand2, char* result) {
    Quadruple* newQuadruple = (Quadruple*)malloc(sizeof(Quadruple));
    if (!newQuadruple) {
        // Handle memory allocation error
        fprintf(stderr, "Memory allocation error for quadruples table entry\n");
        exit(EXIT_FAILURE);
    }

    strcpy(newQuadruple->operator, op);
    strcpy(newQuadruple->operand1, operand1);
    strcpy(newQuadruple->operand2, operand2);
    strcpy(newQuadruple->result, result);
    newQuadruple->next = quadruplesTable;
    quadruplesTable = newQuadruple;
}

Quadruple* lookup_quadruple(char* op, char* operand1, char* operand2, char* result) {
    Quadruple* current = quadruplesTable;
    while (current != NULL) {
        if (strcmp(current->operator, op) == 0 &&
            strcmp(current->operand1, operand1) == 0 &&
            strcmp(current->operand2, operand2) == 0 &&
            strcmp(current->result, result) == 0) {
            return current;  // Found the entry
        }
        current = current->next;
    }
    return NULL;  // Entry not found
}

void cleanup_symbol_table() {
    while (symbolTable != NULL) {
        SymbolEntry* temp = symbolTable;
        symbolTable = symbolTable->next;
        free(temp);
    }
}

void cleanup_quadruples_table() {
    while (quadruplesTable != NULL) {
        Quadruple* temp = quadruplesTable;
        quadruplesTable = quadruplesTable->next;
        free(temp);
    }
}