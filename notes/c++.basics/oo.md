## Classes

Molde para criar objetos — define atributos e métodos.

```cpp
class Pessoa {
public:
    std::string nome;
    int idade;

    void apresentar() {
        std::cout << "Nome: " << nome << std::endl;
    }
};

Pessoa p;
p.nome = "João";
p.idade = 20;
p.apresentar();
```

### Modificadores de Acesso

| Modificador | Acesso |
|---|---|
| `public` | Qualquer lugar |
| `private` | Apenas dentro da classe (padrão se não especificado) |
| `protected` | Dentro da classe e em classes filhas (herança) |

---

## Atributos

Variáveis que pertencem a uma classe — características dos objetos.

```cpp
// atributo comum: cada objeto tem a sua própria cópia
class Pessoa {
public:
    std::string nome;
};

// atributo estático: existe uma única cópia compartilhada por todos os objetos
class Pessoa {
public:
    static int total;
};

int Pessoa::total = 0; // deve ser definido fora da classe
```

---

## Métodos

Funções que pertencem a uma classe — definem o comportamento dos objetos.

```cpp
class Calculadora {
public:
    int somar(int a, int b) {
        return a + b;
    }

    int dobro(int x) {
        return x * 2;
    }
};

Calculadora c;
c.somar(2, 3); // 5
c.dobro(4);    // 8
```

---

## Objetos

Instância de uma classe — algo criado a partir do molde.

```cpp
#include <iostream>
#include <string>

class Pessoa {
private:
    std::string nome;
    int idade;

public:
    Pessoa(std::string n, int i) : nome(n), idade(i) {}

    void apresentar() {
        std::cout << nome << " tem " << idade << " anos\n";
    }
};

int main() {
    Pessoa p1("Ana", 25);
    Pessoa p2("João", 30);

    p1.apresentar();
    p2.apresentar();
}
```

---

## Construtores e Destrutores

**Construtor:** método especial chamado automaticamente quando o objeto é **criado**.

```cpp
// construtor padrão (sem parâmetros)
class Pessoa {
public:
    std::string nome;

    Pessoa() {
        nome = "Desconhecido";
    }
};

// construtor com parâmetros
class Pessoa {
public:
    std::string nome;
    int idade;

    Pessoa(std::string n, int i) {
        nome = n;
        idade = i;
    }
};
```

**Destrutor:** chamado automaticamente quando o objeto é **destruído** (sai do escopo ou é deletado).

```cpp
class Pessoa {
public:
    Pessoa()  { std::cout << "Objeto criado\n"; }
    ~Pessoa() { std::cout << "Objeto destruído\n"; }
};

int main() {
    Pessoa p;
} // destrutor é chamado automaticamente aqui

// objetos dinâmicos (alocados com new): destrutor é chamado no delete
Pessoa* p = new Pessoa();
delete p;
```

---

## Herança

Permite que uma classe filha **herde atributos e métodos** de uma classe pai.

```cpp
class Animal {
public:
    void fazerSom() {
        std::cout << "Som genérico\n";
    }
};

class Cachorro : public Animal {
    // herda fazerSom() automaticamente
};

Cachorro c;
c.fazerSom(); // "Som genérico"
```

### Sobrescrita de Métodos (Override) e Polimorfismo

Para permitir que um método seja sobrescrito, ele deve ser declarado como `virtual` na classe pai:

```cpp
class Animal {
public:
    virtual void fazerSom() {   // virtual: permite sobrescrita
        std::cout << "Som genérico\n";
    }
};

class Cachorro : public Animal {
public:
    void fazerSom() override {  // override: confirma que está sobrescrevendo
        std::cout << "Au Au\n";
    }
};

// polimorfismo com ponteiro da classe pai
Animal* a = new Cachorro();
a->fazerSom(); // "Au Au" — executa a versão do objeto real (Cachorro)
```

> O `virtual` deve vir **antes** do tipo de retorno: `virtual void fazerSom()`. Colocá-lo depois é erro de sintaxe.