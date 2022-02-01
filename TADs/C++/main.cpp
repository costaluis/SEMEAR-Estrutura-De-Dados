#include "lista.hpp"

#include <iostream>

int main(int argc, char* argv[]) {
    lista notas;

    notas.inserir(5);
    notas.inserir(10);
    notas.inserir(9);

    notas.imprimir();

    std::cout << (notas.buscar(9) ? "9 esta na lista" : "9 nao esta na lista") << std::endl;

    notas.remover(9);

    notas.imprimir();

    std::cout << (notas.buscar(9) ? "9 esta na lista" : "9 nao esta na lista") << std::endl;

    return 0;
}