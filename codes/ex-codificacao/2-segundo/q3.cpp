#include <iostream>

using namespace std;

class Rectangulo {
private:
    double largura;
    double altura;
public:
    void setLargura(double);
    void setAltura(double);
    double getLargura() const;
    double getAltura() const;
    double calcularArea() const;
    double calcularPerimetro() const;
};

inline void Rectangulo::setLargura(double l){
    largura = (l > 0) ? l : 1.0;
}

inline void Rectangulo::setAltura(double a){
    this->altura = (a > 0) ? a : 1.0;
}

double Rectangulo::getAltura() const{
    return this->altura;
}

double Rectangulo::getLargura() const{
    return this->largura;
}

double Rectangulo::calcularArea() const{
    return (largura * altura);
}

double Rectangulo::calcularPerimetro() const{
    return ((altura + largura) * 2);
}

int main() {

    double largura, altura;

    cin >> largura;
    cin >> altura;

    Rectangulo a;
    a.setLargura(largura);
    a.setAltura(altura);

    cout << a.getLargura();
    cout << a.getAltura();
    cout << a.calcularArea();
    cout << a.calcularPerimetro();

    return 0;
}