## Controle de Fluxo

### Condicionais

```cpp
// if simples
if (condicao) { ... }

// if + else
if (idade >= 18) {
    std::cout << "Maior de idade";
} else {
    std::cout << "Menor de idade";
}

// else if
if (nota >= 9) {
    std::cout << "Excelente";
} else if (nota >= 7) {
    std::cout << "Bom";
} else {
    std::cout << "Reprovado";
}

// switch — para opções fixas e discretas
switch (opcao) {
    case 1:
        std::cout << "Opção 1";
        break; // sem break, continua executando os próximos casos
    case 2:
        std::cout << "Opção 2";
        break;
    default:
        std::cout << "Outra opção";
}
```

### Loops

```cpp
// for — quando se sabe quantas iterações fazer
for (int i = 0; i < 5; i++) {
    std::cout << i << std::endl;
}

// while — enquanto a condição for verdadeira
int i = 0;
while (i < 5) {
    std::cout << i << std::endl;
    i++;
}

// do while — executa ao menos uma vez antes de checar a condição
int i = 0;
do {
    std::cout << i << std::endl;
    i++;
} while (i < 5);
```

### Controle de Loop

```cpp
break;    // sai do loop imediatamente
continue; // pula para a próxima iteração
```

---