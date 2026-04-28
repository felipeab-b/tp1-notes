#include <iostream>
#include <cmath>

using namespace std;

class Circulo {
private:
    double raio;
    const double PI = acos(-1.0);
public:
    void setRaio(double);
    double getRaio();
    double calcularArea();
    double calcularPerimetro();
    double calcularDiametro();
};

void Circulo::setRaio(double r) {
    raio = (r >= 0) ? r : 0;
}

double Circulo::getRaio() {
    return raio;
}

double Circulo::calcularArea() {
    return PI * pow(raio, 2);
}

double Circulo::calcularPerimetro() {
    return 2 * PI * raio;
}

double Circulo::calcularDiametro() {
    return 2 * raio;
}

int main() {

    double raio;
    cin >> raio;

    Circulo a;
    a.setRaio(raio);

    cout << a.getRaio();
    cout << a.calcularDiametro();
    cout << a.calcularArea();
    cout << a.calcularPerimetro();

    return 0;
}