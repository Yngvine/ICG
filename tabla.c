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

// Function to write Quadruples table to a file
void writeQuadruplesToFile(const char *filename, Quadruple *quadruplesTable, int size) {
    FILE *file = fopen(filename, "a");  // Open the file in append mode

    if (file == NULL) {
        perror("Error opening the file");
        return;
    }

    fprintf(file, "______ALGORITMO COMPILADO______\n");

    for (int i = 0; i < size; ++i) {
        if (quadruplesTable[i].operator == NombreOperadores.O_SUMA) {
            fprintf(file, "%s := %s + %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand2].name, 
                            symbolTable[quadruplesTable[i].result].name);
           
        } else if (quadruplesTable[i].operator == NombreOperadores.O_RESTA) {
            fprintf(file, "%s := %s - %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand2].name, 
                            symbolTable[quadruplesTable[i].result].name);
           
        } else if (quadruplesTable[i].operator == NombreOperadores.O_MUL) {
            fprintf(file, "%s := %s * %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand2].name, 
                            symbolTable[quadruplesTable[i].result].name);
           
        } else if (quadruplesTable[i].operator == NombreOperadores.O_DIVISION) {
            fprintf(file, "%s := %s / %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand2].name, 
                            symbolTable[quadruplesTable[i].result].name);
           
        } else if (quadruplesTable[i].operator == NombreOperadores.O_DIV) {
            fprintf(file, "%s := %s div %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand2].name, 
                            symbolTable[quadruplesTable[i].result].name);
           
        } else if (quadruplesTable[i].operator == NombreOperadores.O_MOD) {
            fprintf(file, "%s := %s mod %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand2].name, 
                            symbolTable[quadruplesTable[i].result].name);
           
        } else if (quadruplesTable[i].operator == NombreOperadores.O_MENOR) {
            fprintf(file, "%s := %s < %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand1].name, 
                            symbolTable[quadruplesTable[i].operand2].name);
           
        } else if (quadruplesTable[i].operator == NombreOperadores.O_MAYOR) {
            fprintf(file, "%s := %s > %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand1].name, 
                            symbolTable[quadruplesTable[i].operand2].name);
           
        } else if (quadruplesTable[i].operator == NombreOperadores.O_MENORI) {
            fprintf(file, "%s := %s <= %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand1].name, 
                            symbolTable[quadruplesTable[i].operand2].name);
           
        } else if (quadruplesTable[i].operator == NombreOperadores.O_MAYORI) {
            fprintf(file, "%s := %s >= %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand1].name, 
                            symbolTable[quadruplesTable[i].operand2].name);
           
        } else if (quadruplesTable[i].operator == NombreOperadores.O_IGUAL) {
            fprintf(file, "%s := %s == %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand1].name, 
                            symbolTable[quadruplesTable[i].operand2].name);
           
        } else if (quadruplesTable[i].operator == NombreOperadores.O_DISTINTO) {
            fprintf(file, "%s := %s <> %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand1].name, 
                            symbolTable[quadruplesTable[i].operand2].name);
           
        } else if (quadruplesTable[i].operator == NombreOperadores.O_GOTO) {
            fprintf(file, "goto %s\n", 
                            symbolTable[quadruplesTable[i].result].name);
           
        } else if (quadruplesTable[i].operator == NombreOperadores.O_ITOF) {
            fprintf(file, "%s := itof %s\n", 
                            symbolTable[quadruplesTable[i].result].name,
                            symbolTable[quadruplesTable[i].operand1].name);

        } else if (quadruplesTable[i].operator == NombreOperadores.O_FTOI) {
            fprintf(file, "%s := ftoi %s\n", 
                            symbolTable[quadruplesTable[i].result].name,
                            symbolTable[quadruplesTable[i].operand1].name);

        } else if (quadruplesTable[i].operator == NombreOperadores.O_UMENOS) {
            fprintf(file, "%s := - %s\n", 
                            symbolTable[quadruplesTable[i].result].name,
                            symbolTable[quadruplesTable[i].operand1].name);

        } else if (quadruplesTable[i].operator == NombreOperador.O_SII) {
            fprintf(file, "if %s == %s goto %s\n", 
                            symbolTable[quadruplesTable[i].operand1].name,
                            symbolTable[quadruplesTable[i].operand2].name,
                            symbolTable[quadruplesTable[i].result].name);

        } else if (quadruplesTable[i].operator == NombreOperador.O_SIMAYI) {
            fprintf(file, "if %s >= %s goto %s\n", 
                            symbolTable[quadruplesTable[i].operand1].name,
                            symbolTable[quadruplesTable[i].operand2].name,
                            symbolTable[quadruplesTable[i].result].name);

        } else if (quadruplesTable[i].operator == NombreOperador.O_SIMENI) {
            fprintf(file, "if %s <= %s goto %s\n", 
                            symbolTable[quadruplesTable[i].operand1].name,
                            symbolTable[quadruplesTable[i].operand2].name,
                            symbolTable[quadruplesTable[i].result].name);

        } else if (quadruplesTable[i].operator == NombreOperador.O_SIMAY) {
            fprintf(file, "if %s > %s goto %s\n", 
                            symbolTable[quadruplesTable[i].operand1].name,
                            symbolTable[quadruplesTable[i].operand2].name,
                            symbolTable[quadruplesTable[i].result].name);

        } else if (quadruplesTable[i].operator == NombreOperador.O_SIMEN) {
            fprintf(file, "if %s < %s goto %s\n", 
                            symbolTable[quadruplesTable[i].operand1].name,
                            symbolTable[quadruplesTable[i].operand2].name,
                            symbolTable[quadruplesTable[i].result].name);

        } else if (quadruplesTable[i].operator == NombreOperador.O_SID) {
            fprintf(file, "if %s <> %s goto %s\n", 
                            symbolTable[quadruplesTable[i].operand1].name,
                            symbolTable[quadruplesTable[i].operand2].name,
                            symbolTable[quadruplesTable[i].result].name);

        } else if (quadruplesTable[i].operator == NombreOperador.O_ASIGNACION) {
            fprintf(file, "%s := %s\n", 
                            symbolTable[quadruplesTable[i].result].name,
                            symbolTable[quadruplesTable[i].operand1].name);
        } else {
            fprintf(file, "Unknown quadruple\n");
            fprintf(file, "%d %d %d %d\n", 
                            quadruplesTable[i].operator,
                            quadruplesTable[i].operand1,
                            quadruplesTable[i].operand2,
                            quadruplesTable[i].result);
        }	

    fclose(file);
}