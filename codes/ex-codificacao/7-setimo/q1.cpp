#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class Senha {
private:
    string valor;
    void validar(const string&) const;
public:
    explicit Senha(const string&);
    bool operator==(const Senha&) const;
    string getValor() const;
};

void Senha::validar(const string& valor) const {
    bool letra = false, digito = false;
    if (valor.length() != 5) {
        throw invalid_argument("Senha com tamanho incorreto");
    }
    for (unsigned int i = 0; i < 5; ++i) {
        char caractere = valor[i];
        for (unsigned int j = i + 1; j < 5; ++j) {
            if (caractere == valor[j]) {
                throw invalid_argument("Senha com caracteres repetidos");
            }
        }
        if (isalpha(caractere)) {
            letra = true;
        }
        if (isdigit(caractere)) {
            digito = true;
        }
    }
    if (!letra || !digito) {
        throw invalid_argument("Senha sem letra ou digito");
    }
}

Senha::Senha(const string& texto) : valor(texto) {
    validar(valor);
}

inline string Senha::getValor() const {
    return valor;
}

bool Senha::operator==(const Senha& s) const {
    return valor == s.valor;
}

int main() {
    try {
        string valorA, valorB;
        cin >> valorA;
        cin >> valorB;
        Senha senhaA(valorA), senhaB(valorB);
        cout << "Senhas com formatos corretos";
        if(senhaA == senhaB){
            cout << "Senhas iguais " << senhaA.getValor() << " " << senhaB.getValor();
        } else {
            cout << "Senhas diferentes " << senhaA.getValor() << " " << senhaB.getValor();
        }
    } catch (const exception& e) {
        cout << "Erro: " << e.what();
    }
    return 0;
}