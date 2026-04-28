#include <iostream>

using namespace std;

class Ponto {
private:
    double x, y;
public:
    Ponto(double x, double y) : x(x), y(y){}
    bool operator == (const Ponto&) const;
    friend ostream& operator<<(ostream&, const Ponto&);
};

ostream& operator<<(std::ostream& os, const Ponto& ponto) {
    os << ponto.x;
    os << ponto.y;
    return os;
}

class Linha {
private:
    Ponto inicio, fim;
public:
    Linha(Ponto inicio, Ponto fim) : inicio(inicio), fim(fim){}
    bool operator == (const Linha&) const;
    friend ostream& operator<<(ostream&, const Linha&);
    Ponto getInicio() const;
    Ponto getFim() const;
};

inline Ponto Linha::getInicio() const{
    return inicio;
}

inline Ponto Linha::getFim() const{
    return fim;
}

bool Ponto::operator==(const Ponto& p) const {
    return (x == p.x && y == p.y);
}

bool Linha::operator==(const Linha& l) const {
    return (inicio == l.inicio && fim == l.fim);
}

ostream& operator<<(std::ostream& os, const Linha& linha) {
    os << linha.inicio;
    os << linha.fim;
    return os;

}

int main() {

    double x0, y0, x1, y1;

    cin >> x0;
    cin >> y0;
    cin >> x1;
    cin >> y1;

    Linha linhaA({x0,y0},{x1,y1});

    cin >> x0;
    cin >> y0;
    cin >> x1;
    cin >> y1;

    Linha linhaB({x0,y0},{x1,y1});

    cout << linhaA.getInicio() << linhaA.getFim() ;
    cout << linhaB.getInicio() << linhaB.getFim() ;

    if (linhaA == linhaB){
        cout << "iguais" << endl;
    }
    else {
        cout << "diferentes" << endl;
    }

    return 0;
}