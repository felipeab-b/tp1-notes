#ifndef ENTIDADES_HPP
#define ENTIDADES_HPP

#include "dominios.hpp"

class Projeto {
    private:
        Codigo codigo;
        Prioridade prioridade;
    public:
        void setCodigo(Codigo);
        Codigo getCodigo();
        void setPrioridade(Prioridade);
        Prioridade getPrioridade();
};

inline void Projeto::setCodigo(Codigo c) {
    this->codigo = c;
}

inline Codigo Projeto::getCodigo() {
    return codigo;
}

inline void Projeto::setPrioridade(Prioridade p){
    this->prioridade = p;
}

inline Prioridade Projeto::getPrioridade() {
    return prioridade;
}

#endif