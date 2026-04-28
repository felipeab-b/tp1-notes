#include <iostream>

#include <stdexcept>

using namespace std;

#define TAMANHO_MAXIMO 5

class Nome {

     private:

          string valor;

 

          void validar(string);

     public:  

          void set(string);

          string get();

};

void Nome::validar(string valor) {
    if (valor.length() > TAMANHO_MAXIMO) {
        throw invalid_argument("Argumento invalido");
    }
}

void Nome::set(string valor) {
    validar(valor);
    this->valor = valor;
}

string Nome::get() {
    return valor;
}

int main(){

     string dadoA, dadoB;

     cin >> dadoA;

     cin >> dadoB;    

     Nome nome;    

     try{

         nome.set(dadoA);

     }

     catch(invalid_argument &excessao){

         cout << excessao.what();

     }

     try{

         nome.set(dadoB);

     }

     catch(invalid_argument &excessao){

         cout << excessao.what();

     }         

     return 0;

}