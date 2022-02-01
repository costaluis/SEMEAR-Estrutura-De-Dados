#include "lista.hpp"

#include <iostream>

lista::lista(void) {
  this->lista_ = new struct_lista;
  this->lista_->prox = NULL;
}

lista::~lista()
{
  lista::excluir_lista(this->lista_);
}


void lista::inserir(tipo_lista dado) {
  struct_lista* lista = this->lista_;

  while (lista->prox != NULL) {
    lista = lista->prox;
  }

  lista->prox = new struct_lista;
  lista = lista->prox;
  lista->dado = dado;
  lista->prox = NULL;
}

struct_lista* lista::buscar(tipo_lista dado) {
  struct_lista* lista_ = this->lista_;

  while (lista_->prox != NULL) {
    lista_ = lista_->prox;
    if (lista_->dado == dado) {
      return lista_;
    }
  }

  return NULL;
}

int lista::remover(tipo_lista dado) {
  struct_lista* elem;
  struct_lista* lista_ = this->lista_;

  while (lista_->prox != NULL) {
    if (lista_->prox->dado == dado) {
      elem = lista_->prox;
      lista_->prox = elem->prox;
      delete elem;

      return 0;
    }

    lista_ = lista_->prox;
  }

  return 1;
}

void lista::imprimir(void) {
  struct_lista* lista_ = this->lista_;

  if (lista_ == NULL) {
    std::cout << "Lista Vazia!" << std::endl;
  }

  while (lista_->prox != NULL) {
    lista_ = lista_->prox;
    std::cout << lista_->dado << " ";
  }

  std::cout << std::endl;
}

void lista::excluir_lista(struct_lista* lista_) {
  if (lista_->prox != NULL) {
    excluir_lista(lista_->prox);
  }

  delete lista_;
}





