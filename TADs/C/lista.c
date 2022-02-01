#include "lista.h"

#include <stdio.h>
#include <stdlib.h>

lista* cria_lista(void) {
  lista* nova_lista;

  nova_lista = calloc(1, sizeof(lista));

  return nova_lista;
}


void inserir_lista(lista* lista_, tipo_lista dado) {
  while (lista_->prox != NULL) {
    lista_ = lista_->prox;
  }

  lista_->prox = calloc(1, sizeof(lista));
  lista_ = lista_->prox;
  lista_->dado = dado;
}

lista* buscar_lista(lista* lista_, tipo_lista dado) {
  while (lista_->prox != NULL) {
    lista_ = lista_->prox;
    if (lista_->dado == dado) {
      return lista_;
    }
  }

  return NULL;
}

int remover_lista(lista* lista_, tipo_lista dado) {
  lista* elem;

  while (lista_->prox != NULL) {
    if (lista_->prox->dado == dado) {
      elem = lista_->prox;
      lista_->prox = elem->prox;
      free(elem);

      return 0;
    }

    lista_ = lista_->prox;
  }

  return 1;
}

void excluir_lista(lista* lista_) {
  if (lista_->prox != NULL) {
    excluir_lista(lista_->prox);
  }

  free(lista_);
}


void imprimir_lista(lista* lista_) {
  if (lista_ == NULL) {
    printf("Lista Vazia!\n");
  }

  while (lista_->prox != NULL) {
    lista_ = lista_->prox;
    printf("%d ", lista_->dado);
  }

  printf("\n");
}




