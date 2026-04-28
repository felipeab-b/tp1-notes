## Matrizes

Arrays com duas dimensões (linhas × colunas).

```cpp
int matriz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

// acessar elemento: matriz[linha][coluna]
std::cout << matriz[0][2]; // 3

// percorrer com loop aninhado
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        std::cout << matriz[i][j] << " ";
    }
    std::cout << std::endl;
}

// com vector (tamanho dinâmico)
#include <vector>
std::vector<std::vector<int>> mat = {
    {1, 2, 3},
    {4, 5, 6}
};
```

---