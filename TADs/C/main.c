#include "lista.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  lista* notas;

  notas = cria_lista();

  inserir_lista(notas, 10);
  inserir_lista(notas, 9);
  inserir_lista(notas, 7);

  imprimir_lista(notas);

  if (buscar_lista(notas, 9)) {
    printf("9 esta na lista\n");
  } else {
    printf("9 nao esta na lista\n");
  }

  remover_lista(notas, 9);

  imprimir_lista(notas);

  if (buscar_lista(notas, 9)) {
    printf("9 esta na lista\n");
  } else {
    printf("9 nao esta na lista\n");
  }

  excluir_lista(notas);

  return 0;
}