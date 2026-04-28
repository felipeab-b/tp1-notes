## Tipos Básicos

| Tipo | Descrição | Tamanho típico | Exemplo |
|---|---|---|---|
| `int` | Número inteiro | 4 bytes | `int x = 10;` |
| `float` | Ponto flutuante (precisão simples) | 4 bytes | `float f = 3.14f;` |
| `double` | Ponto flutuante (precisão dupla) | 8 bytes | `double d = 3.14159;` |
| `char` | Um caractere | 1 byte | `char c = 'A';` |
| `bool` | Verdadeiro ou falso | 1 byte | `bool b = true;` |
| `string` | Cadeia de caracteres (não é primitivo) | variável | `std::string s = "oi";` |

> **`float` vs `double`:** prefira `double` no geral — tem mais precisão. Use `float` quando memória for crítica (ex: processamento de imagens).

### Modificadores de tipo

Modificam o tamanho ou o sinal dos tipos inteiros:

| Modificador | Efeito | Exemplo |
|---|---|---|
| `unsigned` | Só valores positivos (dobra o alcance positivo) | `unsigned int` → 0 a ~4 bilhões |
| `signed` | Positivos e negativos (padrão) | `signed int` → ~-2bi a ~2bi |
| `short` | Inteiro menor | `short int` → 2 bytes |
| `long` | Inteiro maior | `long int` → 4 ou 8 bytes |
| `long long` | Inteiro ainda maior | `long long` → 8 bytes, até ~9 quintilhões |

```cpp
unsigned int populacao = 4000000000; // sem sinal, não pode ser negativo
short int porta = 8080;              // valor pequeno, economiza memória
long long distancia = 9460730000000; // número astronômico
```

> Use `unsigned` quando tiver certeza que o valor nunca será negativo (contadores, índices). Use `long long` para valores muito grandes.

---

## Variáveis e Constantes

**Variável:** espaço na memória que guarda um valor que pode mudar durante o programa.

```cpp
tipo nome = valor;

int numero = 10;
double altura = 1.75;
char letra = 'A';
```

Regras para nomes: não pode começar com número, não pode ter espaços, não pode usar palavras reservadas (`int`, `return`, etc.), é sensível a maiúsculas/minúsculas.

**Constante:** valor que não pode ser alterado após definido.

```cpp
const int IDADE = 10;
IDADE = 20; // erro de compilação

// constexpr: mais moderno, avaliado em tempo de compilação (mais rápido)
constexpr double PI = 3.14159;
```

> Prefira `constexpr` para valores que são realmente constantes em tempo de compilação. `const` pode ser definido em tempo de execução (ex: `const int x = lerValor();`).

---

## Cadeia de Caracteres (String)

Sequência de caracteres.

**Duas formas em C++:**

```cpp
// forma C (array de char terminado em '\0')
char nome[] = "Joao";

// forma moderna (classe std::string)
std::string nome = "Joao";
```

Operações comuns com `std::string`:

```cpp
std::string nome = "Joao";
std::string sobrenome = "Silva";

// concatenar
std::string completo = nome + " " + sobrenome;

// tamanho
nome.length(); // ou nome.size()

// acessar caractere
char letra = nome[0]; // 'J'

// alterar caractere
nome[0] = 'M'; // "Moao"

// comparar
if (nome == "Joao") { ... }

// buscar
nome.find("ao"); // retorna o índice onde encontrou

// substring
nome.substr(1, 2); // "oa" (a partir do índice 1, 2 caracteres)
```

`std::string` é uma **classe** definida no namespace `std`, com vários métodos disponíveis.

---

## Operadores e Expressões

### Aritméticos

```cpp
int a = 10, b = 3;
a + b;  // soma → 13
a - b;  // subtração → 7
a * b;  // multiplicação → 30
a / b;  // divisão inteira → 3 (cuidado: não é 3.33!)
a % b;  // resto → 1
```

> Para divisão com casas decimais, use `double`: `(double)a / b` → 3.333...

### Atribuição

```cpp
x += 3; // x = x + 3
x -= 2;
x *= 2;
x /= 3;
```

### Comparação

```cpp
a == b  // igual
a != b  // diferente
a > b   // maior
a < b   // menor
a >= b  // maior ou igual
a <= b  // menor ou igual
```

### Lógicos

```cpp
true && false // AND → false
true || false // OR → true
!true         // NOT → false
```

### Incremento e Decremento

```cpp
int x = 5;
int a = x++; // a = 5, depois x = 6 (pós-incremento: usa o valor, depois incrementa)
int b = ++x; // x = 7, b = 7       (pré-incremento: incrementa, depois usa o valor)
```

### Ternário

```cpp
std::string resultado = (idade >= 18) ? "Maior" : "Menor";
// forma curta de if/else para expressões simples
```

---
