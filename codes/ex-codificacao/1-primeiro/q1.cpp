#include <iostream>

using namespace std;

class Endereco {

     private:
        string cidade;
        string estado;
     public:    
        string getCidade() const;
        string getEstado() const;

        Endereco(string c) {
            cidade = c;
        }

        Endereco(string c, string e) {
            cidade = c;
            estado = e;
        }
};

string Endereco::getCidade() const{
    return this->cidade;
}

string Endereco::getEstado() const{
    return this->estado;
}

int main(){

    string cidade, estado;

    cin >> cidade;

    cin >> estado;    

    Endereco enderecoA(cidade);

    Endereco enderecoB(cidade, estado);   

    cout << enderecoA.getCidade();

    cout << enderecoB.getCidade();

    cout << enderecoB.getEstado();

    return 0;

}