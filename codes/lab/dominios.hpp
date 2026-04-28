#ifndef DOMINIOS_HPP
#define DOMINIOS_HPP

#include <stdexcept>

class Dominio {
    protected:
        int valor; 
        virtual void validar(int) = 0; 
    public:
        void setValor(int); 
        int getValor() const; 
};
inline int Dominio::getValor() const{ 
    return valor;
}

class Codigo: public Dominio {
    private:
        static const int LIMITE = 25;
        void validar(int);
};

class Prioridade: public Dominio {
    private:
        static const int INVALIDO = 0;
        void validar(int);
};

#endif