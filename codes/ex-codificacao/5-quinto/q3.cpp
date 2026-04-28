#include <iostream>
#include <stdexcept> // Adicionado para reconhecer invalid_argument

using namespace std;

// Declarações de classes.

class Codigo {
    private:
        int valor;
        static const int LIMITE = 100;
        void validar(int);
    public:
        void set(int);
        int get() {return valor;}
};

class Preco {
    private:
        int valor;
        static const int LIMITE = 200;
        void validar(int);
    public:
        void set(int);
        int get() {return valor;}
};

// Removida a herança. A composição já está garantida pelos atributos privados.
class Pedido { 
    private:
        Codigo codigo;
        Preco preco;
    public:
        void setCodigo(Codigo);
        void setPreco(Preco);
        Codigo getCodigo() {return codigo;}
        Preco getPreco() {return preco;}
};

// Implementações de métodos.

void Codigo::validar(int valor) {
    if (valor > LIMITE) {
        throw invalid_argument("invalid");
    }
}

void Codigo::set(int valor) {
    validar(valor);
    this->valor = valor;
}

void Preco::validar(int valor) {
    if (valor > LIMITE) {
        throw invalid_argument("invalid");
    }
}

void Preco::set(int valor) {
    validar(valor);
    this->valor = valor;
}

void Pedido::setCodigo(Codigo c) {
    this->codigo = c;
}

void Pedido::setPreco(Preco p) {
    this->preco = p;
}

// Função main.
int main(){  
    int dadoA, dadoB;
    cin >> dadoA;
    cin >> dadoB;
    
    Codigo codigo;
    Preco preco;
    
    try{
        codigo.set(dadoA);
        preco.set(dadoB);
    }
    catch(invalid_argument &excecao){
        cout << "FALHA";
        return 0;
    }
    
    Pedido pedido;
    pedido.setCodigo(codigo);
    pedido.setPreco(preco);
    
    cout << pedido.getCodigo().get();
    cout << pedido.getPreco().get();
    
    return 0;
}