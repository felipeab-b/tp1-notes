#include <iostream>
#include "entidades.hpp"
#include "testes.hpp"

using namespace std;

int main() {

    // Primeiro LAB

    // CodigoCliente cli;

    // int valor;
    // cin >> valor;

    // if (cli.setValor(valor)) {
    //     cout << cli.getValor() << endl;
    // } else {
    //     cout << "Error" << endl;
    // }

    // return 0;

    // Segunda Implementação

    // Codigo* p = new Codigo();

    // int valor;
    // cin >> valor;

    // if (p->setValor(valor)) {
    //     cout << p->getValor() << endl;
    // } else {
    //     cout << "Error" << endl;
    // }

    // delete p;

    // return 0;

    // ===========================================================

    // Segundo LAB

    // Codigo c;
    // Prioridade p;

    // int valorC;
    // cin >> valorC;
    // if (!c.setValor(valorC)) {
    //     cout << "Codigo invalido" << endl;
    //     return 0;
    // }

    // int valorP;
    // cin >> valorP;
    // if (!p.setValor(valorP)) {
    //     cout << "Prioridade invalida" << endl;
    //     return 0;
    // }

    // Projeto pro;
    // pro.setCodigo(c);
    // pro.setPrioridade(p);

    // cout << pro.getCodigo().getValor() << endl;
    // cout << pro.getPrioridade().getValor() << endl;

    // return 0;

    // ===========================================================

    // Terceiro LAB

    // Codigo c;
    // Prioridade p;

    // int valorC;
    // cin >> valorC;
    // if (!c.setValor(valorC)) {
    //     cout << "Codigo invalido" << endl;
    //     return 0;
    // }

    // int valorP;
    // cin >> valorP;
    // if (!p.setValor(valorP)) {
    //     cout << "Prioridade invalida" << endl;
    //     return 0;
    // }

    // Projeto pro;
    // pro.setCodigo(c);
    // pro.setPrioridade(p);

    // cout << pro.getCodigo().getValor() << endl;
    // cout << pro.getPrioridade().getValor() << endl;

    // return 0;

    // ===========================================================

    // Quarto LAB

    // Codigo c;
    // Prioridade p;

    // int valorC;
    // cin >> valorC;

    // int valorP;
    // cin >> valorP;

    // c.setValor(valorC);
    // p.setValor(valorP);

    // Projeto P;
    // P.setCodigo(c);
    // P.setPrioridade(p);

    // cout << P.getCodigo().getValor() << endl;
    // cout << P.getPrioridade().getValor() << endl;

    // return 0;

    // ===========================================================

    // Quinto LAB

    TUDominio teste;

    int resultado = teste.run();

    if (resultado == TUDominio::SUCESSO) {
        cout << "Teste executado com sucesso!" << endl;
    } else {
        cout << "Falha no teste!" << endl;
    }

    return 0;
}