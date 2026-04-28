#include <iostream>

using namespace std;

class Ponto {
private:
    double x, y;
public:
    Ponto(double x, double y) : x(x), y(y){}
    bool operator == (const Ponto&) const;
    double getX() const;
    double getY() const;
};

ostream& operator<<(std::ostream& os, const Ponto& ponto) {
    os << ponto.getX() ;
    os << ponto.getY() ;
    return os;
}

bool Ponto::operator==(const Ponto& p) const {
    return (x == p.x && y == p.y);
}

double Ponto::getX() const {
    return x;
}

double Ponto::getY() const {
    return y;
}

int main() {

    double x, y;

    cin >> x;
    cin >> y;

    Ponto pontoA(x,y);

    cin >> x;
    cin >> y;

    Ponto pontoB(x,y);

    cout << pontoA;
    cout << pontoB;

    if (pontoA == pontoB){
        cout << "iguais" ;
    }
    else {
        cout << "diferentes" ;
    }

    return 0;
}