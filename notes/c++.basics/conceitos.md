# C++

C++ é uma linguagem de programação **híbrida**: respeita o paradigma de orientação a objetos, mas não é completamente composta por objetos — os tipos primitivos vêm da linguagem C, que é sua base.

- **Forte verificação de tipos** — tudo deve ser tipado explicitamente
- **Linguagem genérica** — suporta templates, permitindo escrever código que funciona com qualquer tipo
- **Linguagem compilada** — necessita de um compilador para ser executada (ex: g++, clang++)

---

## Processo de Compilação

```
código (.cpp) → pré-processamento → compilação → linkagem → executável
```

### 1. Pré-processamento

Antes de compilar, as linhas que começam com `#` são resolvidas:

| Diretiva | Função |
|---|---|
| `#include` | Inclui bibliotecas/arquivos externos |
| `#define` | Cria macros — substituições de texto feitas antes da compilação |
| `#ifdef` / `#ifndef` | Compilação condicional — inclui ou exclui trechos de código dependendo de uma condição |

### 2. Compilação

- Verificação de erros de sintaxe e de tipos
- Transformação do código em código de máquina intermediário (assembly/objetos)

### 3. Linkagem

O compilador junta o código com as bibliotecas utilizadas, gerando o **arquivo executável** final.

---

## Diretivas de Compilação

Instruções que começam com `#` e são processadas **antes** da compilação pelo pré-processador.

```cpp
#include <iostream>        // inclui a biblioteca iostream
#define PI 3.14159         // toda ocorrência de PI vira 3.14159
#define QUADRADO(x) (x*x)  // macro com argumento

#ifdef DEBUG               // só compila o bloco se DEBUG estiver definido
    std::cout << "modo debug\n";
#endif
```

> Macros com `#define` são simples substituições de texto — não têm verificação de tipo. Para constantes tipadas, prefira `const` ou `constexpr`.

---

## Namespaces

Um namespace é um **container que agrupa nomes** (funções, variáveis e classes) para evitar conflitos quando elementos de bibliotecas diferentes têm o mesmo nome.

```cpp
// acessando elemento de um namespace com ::
std::cout << "Olá";
```

O namespace padrão da biblioteca padrão do C++ é o `std`.

Para evitar escrever `std::` toda hora, existem duas abordagens:

```cpp
// importa tudo do namespace (não recomendado em projetos grandes)
using namespace std;
cout << "Olá";

// boa prática: importar apenas o que for usar
using std::cout;
using std::endl;
cout << "Olá" << endl;
```

---

## Escopos

Região do código onde uma variável ou função pode ser acessada.

| Escopo | Descrição |
|---|---|
| **Local** | Variáveis declaradas dentro de `{}` — existem só dentro do bloco |
| **Global** | Existem em todo o código |
| **De função** | Parâmetros e variáveis existem apenas dentro da função |
| **De namespace** | Variáveis e funções pertencem a um namespace específico e são acessadas com `::` |
| **De classe** | Atributos e métodos pertencem à classe |

**Shadowing:** ocorre quando uma variável local tem o mesmo nome de uma variável global, "escondendo" o valor global dentro daquele escopo.

```cpp
int x = 10; // global

void func() {
    int x = 20; // local — faz shadowing da global
    std::cout << x; // imprime 20
}
```

---

## Comentários

Parte do código que o compilador ignora.

```cpp
// comentário de uma linha

/*
   comentário
   de bloco
*/
```

O **Doxygen** é uma ferramenta que gera documentação automática a partir de comentários com formato especial:

```cpp
/// @brief Soma dois números inteiros
/// @param a Primeiro operando
/// @param b Segundo operando
/// @return Resultado da soma
int somar(int a, int b) {
    return a + b;
}
```

---

## Decomposição em Funções

Quebrar o código em funções menores — cada função com **uma responsabilidade**.

**Benefícios:** organização, reutilização, legibilidade e manutenção.

```cpp
#include <iostream>

int lerNumero() {
    int x;
    std::cin >> x;
    return x;
}

int somar(int a, int b) {
    return a + b;
}

void mostrarResultado(int r) {
    std::cout << "Resultado: " << r << std::endl;
}

int main() {
    int a = lerNumero();
    int b = lerNumero();
    mostrarResultado(somar(a, b));
}
```

---

## Biblioteca Padrão

Conjunto de funcionalidades prontas que já vêm com o compilador.

### `<iostream>` — Entrada e saída

```cpp
#include <iostream>

std::cout << "Olá";   // saída
std::cin >> x;        // entrada
std::cerr << "Erro";  // saída de erro
std::endl;            // quebra de linha + flush do buffer
```

### `<string>` — Strings

```cpp
#include <string>
std::string nome = "João";
```

### `<vector>` — Containers dinâmicos

```cpp
#include <vector>
std::vector<int> numeros = {1, 2, 3};
```

### `<algorithm>` — Algoritmos

```cpp
#include <algorithm>
std::sort(numeros.begin(), numeros.end());    // ordena
std::find(numeros.begin(), numeros.end(), 2); // busca
std::reverse(numeros.begin(), numeros.end()); // inverte
```

### `<cmath>` — Matemática

```cpp
#include <cmath>
std::sqrt(16);   // raiz quadrada → 4
std::pow(2, 10); // potência → 1024
std::abs(-5);    // valor absoluto → 5
```

### `<fstream>` — Arquivos

```cpp
#include <fstream>

std::ofstream arquivo("saida.txt");  // abre para escrita
arquivo << "Olá";

std::ifstream leitura("entrada.txt"); // abre para leitura
std::string linha;
std::getline(leitura, linha);
```

### `<chrono>` — Tempo

Usado para medir tempo de execução, criar pausas e trabalhar com datas/durações.

```cpp
#include <chrono>
#include <thread>

// medir tempo de execução
auto inicio = std::chrono::high_resolution_clock::now();

// ... código a medir ...

auto fim = std::chrono::high_resolution_clock::now();
auto duracao = std::chrono::duration_cast<std::chrono::milliseconds>(fim - inicio);
std::cout << "Tempo: " << duracao.count() << "ms\n";

// pausar execução por 2 segundos
std::this_thread::sleep_for(std::chrono::seconds(2));
```

### Exemplo completo

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 2, 9, 1};

    std::sort(v.begin(), v.end());

    for (int n : v) {
        std::cout << n << " ";
    }

    return 0;
}
```

---