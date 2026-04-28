#include "dominios.hpp"

void Dominio::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}

void Codigo::validar(int valor) {
    if (valor < 0 || valor > LIMITE) {
        throw std::invalid_argument("Valor Inválido");
    }
}

void Prioridade::validar(int valor) {
    if (valor <= INVALIDO) {
        throw std::invalid_argument("Valor Inválido");
    }
}
