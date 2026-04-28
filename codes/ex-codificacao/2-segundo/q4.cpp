#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

class Cubo {
private:
    double aresta;
public:
    void setAresta(double);
    double getAresta() const;
    double calcularVolume() const;
    double calcularAreaSuperficie() const;
    double calcularAreaSuperficieLateral() const;
    double calcularDiagonal() const;
};

void Cubo::setAresta(double a) {
    if (a <= 0) {
            aresta = 1.0;
    } else {
            aresta = a;
    }
}

double Cubo::getAresta() const{
    return aresta;
}

double Cubo::calcularVolume() const{
    return (pow(aresta, 3));
}

double Cubo::calcularAreaSuperficie() const{
    return (6 * (pow(aresta, 2)));
}

double Cubo::calcularAreaSuperficieLateral() const {
    return 4 * pow(aresta, 2);
}

double Cubo::calcularDiagonal() const {
    return aresta * sqrt(3.0);
}

int main() {

    Cubo a;

    double aresta;
    cin >> aresta;

    a.setAresta(aresta);

    cout << a.getAresta();
    cout << a.calcularVolume();
    cout << a.calcularAreaSuperficie();
    cout << a.calcularAreaSuperficieLateral();
    cout << a.calcularDiagonal();

    return 0;
}