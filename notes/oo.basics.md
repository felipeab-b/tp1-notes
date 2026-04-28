# Orientação a Objetos

Orientação a Objetos (OO) é um paradigma de programação, ou seja, um modo de se programar seguindo algumas regras e comportamentos predefinidos. Na OO pura, tudo dentro do sistema são objetos.

---

## Objeto

Instância de uma classe — criar um objeto é **instanciar** uma classe. Objetos podem ser compostos por outros objetos.

---

## Classes

Classes são elementos que descrevem objetos semelhantes. Definem:
- A **estrutura** que um objeto deve seguir → por meio dos **atributos**
- As **ações** que um objeto deve realizar → por meio dos **métodos**

### Atributos

Definem o **estado** do objeto em um determinado instante de tempo.

### Métodos

Definem o **comportamento** que um objeto deve seguir ao ser solicitado.

- **Métodos públicos:** podem ser invocados por elementos externos à classe
- **Métodos privados:** só podem ser chamados dentro da própria classe — atuam como sub-rotinas de métodos públicos

#### Métodos Abstratos

Declarados mas sem implementação definida — o corpo é vazio. Servem para forçar que subclasses implementem aquele comportamento.

#### Métodos Inline

Métodos cujas definições são inseridas diretamente no ponto de chamada pelo compilador, evitando o "salto" padrão para a função e o posterior retorno. Podem ser definidos dentro ou fora da classe.

### Tipos de Classe

| Tipo | Descrição |
|---|---|
| **Domínio** | As mais simples, definem formatos de dados — baixo nível de abstração |
| **Entidade** | Agrupam atributos relacionados a um objeto do mundo real |
| **Controladora** | Definem métodos com regras de negócio |
| **Fronteira** | Objetos que atuam como interface para outros objetos ou para o meio externo |

---

## Mensagens

Objetos se comunicam por meio de mensagens, que podem invocar métodos ou acessar atributos de outros objetos.

**Padrões de interação:**

- **Cliente-Servidor:** o cliente manda uma mensagem pedindo algo ao servidor, e este responde
- **Produtor-Consumidor:** o produtor envia mensagens ao consumidor mas não espera nem quer resposta

---

## Os Três Pilares da OO

### 1. Encapsulamento

Comportamento de **privar** atributos e métodos, fazendo com que só possam ser acessados dentro do próprio objeto. Só deve ser público o que realmente precisa ser.

**Benefício:** elementos podem ser alterados internamente sem afetar outros objetos.

- Atributos privados são acessados externamente por meio de métodos públicos → **getters** e **setters**
- Métodos privados funcionam como sub-rotinas: alguém chama um método público, e este chama os privados internamente

#### Interface de Classe

Conjunto de atributos e métodos **públicos** que permitem a interação com o objeto — é o que o mundo externo "enxerga" da classe.

---

### 2. Herança

Quando diferentes classes compartilham atributos e métodos em comum, uma classe pode **herdar** elementos de outra, reaproveitando código.

- A classe que herda é chamada de **subclasse** (ou classe filha)
- A classe herdada é chamada de **superclasse** (ou classe mãe)

---

### 3. Polimorfismo

Capacidade de um mesmo método se comportar de formas diferentes dependendo do objeto que o executa.

**O papel dos ponteiros aqui:**

Um **ponteiro** é uma variável que guarda o endereço de memória de um objeto — ele "aponta" para onde aquele objeto está armazenado.

Com polimorfismo, você pode ter um ponteiro do tipo da **superclasse** apontando para um objeto de uma **subclasse**. Quando um método é chamado por esse ponteiro, o programa executa a versão do método do objeto real (a subclasse), não da superclasse.

**Exemplo prático:**

```
Superclasse: Animal       → método: fazerSom()
Subclasse:   Cachorro     → método: fazerSom() → "Au!"
Subclasse:   Gato         → método: fazerSom() → "Miau!"

Animal* ptr;              // ponteiro do tipo Animal

ptr = &cachorro;
ptr->fazerSom();          // executa: "Au!"

ptr = &gato;
ptr->fazerSom();          // executa: "Miau!"
```

O ponteiro é do tipo `Animal`, mas o comportamento executado depende do objeto real para o qual ele aponta. Isso é polimorfismo — o mesmo "chamado" produz comportamentos diferentes.

#### Ponteiro `this`

Ponteiro especial que existe dentro de qualquer objeto e aponta para o **próprio objeto**. Usado para referenciar os atributos e métodos da instância atual dentro da classe.

---

## Links

Classes não estão isoladas — associam-se por meio de **links**, que são instâncias de ligação entre classes. Existem quando uma classe precisa acessar serviços ou atributos de outra.