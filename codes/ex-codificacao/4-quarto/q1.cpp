#include <iostream>

using namespace std;

// Declaração e implementação da classe Poligono.

class Poligono {

private:

     string cor;

public:

     Poligono(string cor) {
        this->cor = cor;
     }

     virtual ~Poligono(){}

     string getCor() {return cor;}

     virtual float calcularPerimetro() = 0;

};

// Declaração e implementação da classe Paralelograma.

class Paralelograma: public Poligono {
    private:
        float a;
        float b;
    public:
        Paralelograma (float a, float b, string cor): Poligono (cor) {
            this->a = a;
            this->b = b;
        }
        float calcularPerimetro() {return 2 * (a + b);}
};

// Declaração e implementação da classe Trapezio.

class Trapezio: public Poligono {
    private:
        float B;
        float b;
        float L1;
        float L2;
    public:
        Trapezio (float B, float b, float L1, float L2, string cor): Poligono (cor) {
            this->B = B;
            this->b = b;
            this->L1 = L1;
            this->L2 = L2;
        }
        float calcularPerimetro() {return B + b + L1 + L2;}
};

// Implementação de método main.

int main() {

     Poligono*ptr;

     string cor;

     float a, b, B, L1, L2;  

     cin >> cor;

     cin >> a;

     cin >> b;

     cin >> B;

     cin >> L1;

     cin >> L2;

     ptr = new Paralelograma(a,b, cor);

     cout << ptr->getCor();

     cout << ptr->calcularPerimetro();

     delete ptr;

     ptr = new Trapezio(B, b, L1, L2, cor);

     cout << ptr->getCor();

     cout << ptr->calcularPerimetro();

     delete ptr;

     return 0;

}