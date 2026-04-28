#include <iostream>
#include <cmath>

using namespace std;

class Cilindro {
private:
    double raio;
    double altura;
    const double PI = acos(-1.0);

public:
    Cilindro(double r = 1.0, double a = 1.0) : raio(r), altura(a) {}
    double getRaio() const;
    double getAltura() const;
    double calcularVolume() const;
    double calcularAreaLateral() const;
    double calcularAreaSuperficieTotal() const;
};

inline double Cilindro::calcularAreaSuperficieTotal() const {
    return calcularAreaLateral() + (2 * PI * pow(raio, 2));
}

double Cilindro::getRaio() const {
    return raio;
}

double Cilindro::getAltura() const {
    return altura;
}

double Cilindro::calcularVolume() const {
    return (PI * pow(raio, 2) * altura);
}

double Cilindro::calcularAreaLateral() const {
    return (2 * PI * raio * altura);
}

int main() {

    double raio;
    double altura;
    cin >> raio;
    cin >> altura;

    Cilindro cilindro(raio, altura);

    cout << cilindro.getRaio();
    cout << cilindro.getAltura();
    cout << cilindro.calcularVolume();
    cout << cilindro.calcularAreaLateral();
    cout << cilindro.calcularAreaSuperficieTotal();

    return 0;
}