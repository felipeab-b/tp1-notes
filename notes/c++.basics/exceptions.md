## Mecanismos de Exceção

Forma de tratar erros que ocorrem **em tempo de execução**.

```cpp
try {
    // código que pode gerar erro
    if (b == 0) throw "Divisão por zero!"; // lança o erro
    std::cout << a / b;
}
catch (const char* msg) {
    std::cout << "Erro: " << msg; // captura e trata
}
```

A biblioteca padrão oferece classes de exceção prontas:

```cpp
#include <stdexcept>

throw std::runtime_error("Erro grave");       // erro de execução genérico
throw std::invalid_argument("Argumento ruim"); // argumento inválido
throw std::out_of_range("Índice fora do range");

// capturar qualquer exceção da biblioteca padrão
catch (const std::exception& e) {
    std::cout << e.what(); // mensagem do erro
}
```

`std::exception` é a **classe base** de todas as exceções da biblioteca padrão.

---