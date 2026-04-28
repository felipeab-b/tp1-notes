## Ponteiros

Variável que guarda o **endereço de memória** de outra variável.

```cpp
int x = 10;
int* p = &x;  // p guarda o endereço de x

&x   // operador de endereço — retorna onde x está na memória
*p   // operador de desreferência — acessa o valor no endereço apontado

std::cout << x;   // 10
std::cout << &x;  // ex: 0x61ff08
std::cout << p;   // ex: 0x61ff08
std::cout << *p;  // 10
```

```cpp
int* p = nullptr; // ponteiro nulo — boa prática ao inicializar sem valor ainda
```

---