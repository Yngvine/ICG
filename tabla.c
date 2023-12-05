#include "tabla.h"
#include <stdlib.h>


SymbolEntry symbolTable[MAX_SYMBOLS];
Quadruple quadruplesTable[MAX_QUADRUPLES];

int symbolTableIndex = 0; // Keep track of the current index in symbolTable
int quadruplesTableIndex = 0; // Keep track of the current index in quadruplesTable
int tempVarIndex = 0;

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
    return -1; // Entry not found
}

int consulta_tipo_TS(char* name) {
    for (int i = 0; i < symbolTableIndex; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            return symbolTable[i].type; // Found the entry
        }
    }
    return -1; // Entry not found
}

SymbolEntry* newTemp() {
    if (symbolTableIndex < MAX_SYMBOLS) {
        char nombre[5];
        sprintf(nombre, "t%d", tempVarIndex);
        ++tempVarIndex;
        SymbolEntry* newSymbol = &symbolTable[symbolTableIndex++];
        strncpy(newSymbol->name, nombre, MAX_IDENTIFIER_LENGTH - 1);
        return newSymbol;
    } else {
        // Handle error: symbol table is full
        fprintf(stderr, "Symbol table is full\n");
        exit(EXIT_FAILURE);
    }
}


void gen(int op, int operand1, int operand2, int result) {
    if (quadruplesTableIndex < MAX_QUADRUPLES) {
        Quadruple* newQuadruple = &quadruplesTable[quadruplesTableIndex++];
        newQuadruple->operator = op;
        newQuadruple->operand1 = operand1;
        newQuadruple->operand2 = operand2;
        newQuadruple->result = result;
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

    Quadruple outputAuxTable[MAX_QUADRUPLES];
    int outputAuxTableIndex = 0;

    fprintf(file, "______ALGORITMO COMPILADO______\n");

    for (int i = 0; i < size; ++i) {

        if (quadruplesTable[i].operator == O_SUMA) {
            fprintf(file, "%s := %s + %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand2].name, 
                            symbolTable[quadruplesTable[i].result].name);
           
        } else if (quadruplesTable[i].operator == O_RESTA) {
            fprintf(file, "%s := %s - %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand2].name, 
                            symbolTable[quadruplesTable[i].result].name);
           
        } else if (quadruplesTable[i].operator == O_MUL) {
            fprintf(file, "%s := %s * %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand2].name, 
                            symbolTable[quadruplesTable[i].result].name);
           
        } else if (quadruplesTable[i].operator == O_DIVISION) {
            fprintf(file, "%s := %s / %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand2].name, 
                            symbolTable[quadruplesTable[i].result].name);
           
        } else if (quadruplesTable[i].operator == O_DIV) {
            fprintf(file, "%s := %s div %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand2].name, 
                            symbolTable[quadruplesTable[i].result].name);
           
        } else if (quadruplesTable[i].operator == O_MOD) {
            fprintf(file, "%s := %s mod %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand2].name, 
                            symbolTable[quadruplesTable[i].result].name);
           
        } else if (quadruplesTable[i].operator == O_MENOR) {
            fprintf(file, "%s := %s < %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand1].name, 
                            symbolTable[quadruplesTable[i].operand2].name);
           
        } else if (quadruplesTable[i].operator == O_MAYOR) {
            fprintf(file, "%s := %s > %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand1].name, 
                            symbolTable[quadruplesTable[i].operand2].name);
           
        } else if (quadruplesTable[i].operator == O_MENORI) {
            fprintf(file, "%s := %s <= %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand1].name, 
                            symbolTable[quadruplesTable[i].operand2].name);
           
        } else if (quadruplesTable[i].operator == O_MAYORI) {
            fprintf(file, "%s := %s >= %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand1].name, 
                            symbolTable[quadruplesTable[i].operand2].name);
           
        } else if (quadruplesTable[i].operator == O_IGUAL) {
            fprintf(file, "%s := %s == %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand1].name, 
                            symbolTable[quadruplesTable[i].operand2].name);
           
        } else if (quadruplesTable[i].operator == O_DISTINTO) {
            fprintf(file, "%s := %s <> %s\n", 
                            symbolTable[quadruplesTable[i].result].name, 
                            symbolTable[quadruplesTable[i].operand1].name, 
                            symbolTable[quadruplesTable[i].operand2].name);
           
        } else if (quadruplesTable[i].operator == O_GOTO) {
            fprintf(file, "goto %s\n", 
                            symbolTable[quadruplesTable[i].result].name);
           
        } else if (quadruplesTable[i].operator == O_ITOF) {
            fprintf(file, "%s := itof %s\n", 
                            symbolTable[quadruplesTable[i].result].name,
                            symbolTable[quadruplesTable[i].operand1].name);

        } else if (quadruplesTable[i].operator == O_FTOI) {
            fprintf(file, "%s := ftoi %s\n", 
                            symbolTable[quadruplesTable[i].result].name,
                            symbolTable[quadruplesTable[i].operand1].name);

        } else if (quadruplesTable[i].operator == O_UMENOS) {
            fprintf(file, "%s := - %s\n", 
                            symbolTable[quadruplesTable[i].result].name,
                            symbolTable[quadruplesTable[i].operand1].name);

        } else if (quadruplesTable[i].operator == O_SII) {
            fprintf(file, "if %s == %s goto %s\n", 
                            symbolTable[quadruplesTable[i].operand1].name,
                            symbolTable[quadruplesTable[i].operand2].name,
                            symbolTable[quadruplesTable[i].result].name);

        } else if (quadruplesTable[i].operator == O_SIMAYI) {
            fprintf(file, "if %s >= %s goto %s\n", 
                            symbolTable[quadruplesTable[i].operand1].name,
                            symbolTable[quadruplesTable[i].operand2].name,
                            symbolTable[quadruplesTable[i].result].name);

        } else if (quadruplesTable[i].operator == O_SIMENI) {
            fprintf(file, "if %s <= %s goto %s\n", 
                            symbolTable[quadruplesTable[i].operand1].name,
                            symbolTable[quadruplesTable[i].operand2].name,
                            symbolTable[quadruplesTable[i].result].name);

        } else if (quadruplesTable[i].operator == O_SIMAY) {
            fprintf(file, "if %s > %s goto %s\n", 
                            symbolTable[quadruplesTable[i].operand1].name,
                            symbolTable[quadruplesTable[i].operand2].name,
                            symbolTable[quadruplesTable[i].result].name);

        } else if (quadruplesTable[i].operator == O_SIMEN) {
            fprintf(file, "if %s < %s goto %s\n", 
                            symbolTable[quadruplesTable[i].operand1].name,
                            symbolTable[quadruplesTable[i].operand2].name,
                            symbolTable[quadruplesTable[i].result].name);

        } else if (quadruplesTable[i].operator == O_SID) {
            fprintf(file, "if %s <> %s goto %s\n", 
                            symbolTable[quadruplesTable[i].operand1].name,
                            symbolTable[quadruplesTable[i].operand2].name,
                            symbolTable[quadruplesTable[i].result].name);

        } else if (quadruplesTable[i].operator == O_ASIGNACION) {
            fprintf(file, "%s := %s\n", 
                            symbolTable[quadruplesTable[i].result].name,
                            symbolTable[quadruplesTable[i].operand1].name);

        } else if (quadruplesTable[i].operator == O_ENTRADA) {
            fprintf(file, "input %s\n", 
                            symbolTable[quadruplesTable[i].result].name);

        } else if (quadruplesTable[i].operator == O_SALIDA) {
            outputAuxTable[outputAuxTableIndex++] = quadruplesTable[i];
        } else {
            fprintf(file, "Unknown quadruple\n");
            fprintf(file, "%d %d %d %d\n", 
                            quadruplesTable[i].operator,
                            quadruplesTable[i].operand1,
                            quadruplesTable[i].operand2,
                            quadruplesTable[i].result);
        }	

    }
    for (int i = 0; i < outputAuxTableIndex; ++i) {
        if (outputAuxTable[i].operator == O_SALIDA) {
            fprintf(file, "output %s\n", 
                            symbolTable[outputAuxTable[i].result].name);
        }
    }
    fclose(file);
}

void volcar_lista_id_a_tabla(ListaId_T* ListaId_T, NombreTipo tipo){
    for (int i = 0; i < ListaId_T->size; ++i) {
        add_to_symbol_table(ListaId_T->ids[i], tipo);
    }
}