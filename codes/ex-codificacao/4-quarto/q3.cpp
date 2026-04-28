#include <iostream>

using namespace std;

// Declaração e implementação da classe Poligono.

class Poligono {
    protected:
        float lado;
    public:
        virtual int getNumeroLados() = 0;
        virtual float calcularArea() = 0;

        Poligono(float lado) {
            this->lado = lado;
        }
        
};

// Declaração e implementação da classe Quadrado.

class Quadrado: public Poligono {
    public:
        int getNumeroLados() {return 4;}
        float calcularArea() {return lado*lado;}

        Quadrado(float lado): Poligono(lado) {
            this->lado = lado;
        }
};

// Declaração e implementação da classe Pentagono.

class Pentagono: public Poligono {
    private:
        float apotema;
    public:
        int getNumeroLados() {return 5;}
        float calcularArea() {return (5*lado*apotema) / 2;}

        Pentagono(float lado, float apotema): Poligono(lado) {
            this->apotema = apotema;
        }
};

// Implementação de método main.

int main() {

     float lado, apotema;   

     cin >> lado;

     cin >> apotema;

     Poligono*ptr;

     ptr = new Quadrado(lado);

     cout << ptr->getNumeroLados();

     cout << ptr->calcularArea();

     ptr = new Pentagono(lado, apotema);

    cout << ptr->getNumeroLados();

     cout << ptr->calcularArea();

     return 0;

}