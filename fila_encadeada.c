#include <stdio.h>
#include <stdlib.h>
#include "fila_encadeada.h"

No *criarNovoNo(int dado) {
    No *novo = (No *) malloc(sizeof(No));
    if (novo != NULL) {
        novo->dado = dado;
        novo->prox = NULL;
        return novo;
    }
    return NULL;
}

void enfileirar(Fila *f, int dado) {
    No *novo = criarNovoNo(dado);
    if (novo != NULL) {
        if (f->inicio == NULL) {
            f->inicio = novo;
        } else {
            f->fim->prox = novo;
        }
        f->fim = novo;
    }
}

int desenfileirar(Fila *f) {
    if (f->inicio != NULL) {
        No *aux = f->inicio;
        int dado = aux->dado;
        f->inicio = f->inicio->prox;
        free(aux);
        return dado;
    }
    return -1;
}

short int filaVazia(Fila *f) {
    return f->inicio == NULL;
}

void imprimir(Fila *f) {
    No *aux = f->inicio;
    while (aux != NULL) {
        printf("%d ", aux->dado);
        aux = aux->prox;
    }
    printf("\n");
}
