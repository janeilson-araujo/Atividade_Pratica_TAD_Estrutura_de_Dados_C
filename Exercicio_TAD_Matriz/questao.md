# Exercício: Criando e Manipulando o Tipo Abstrato Matriz

## Objetivo

Praticar a definição e manipulação de tipos abstratos de dados, utilizando uma estrutura que represente informações e funcionalidades sobre uma matriz.

## Enunciado

Você deverá implementar um tipo abstrato de dados chamado `TMatriz` para representar matrizes quadradas. Seu tipo abstrato deverá armazenar os elementos da matriz e a sua dimensão, ou ordem, `n`.

Considere que a matriz tem uma dimensão determinada em tempo de execução, utilizando alocação dinâmica.

Seu TAD deve possuir funções para:

1. ler uma matriz, incluindo a dimensão e os dados;
2. mostrar a matriz transposta;
3. mostrar as diagonais principal e secundária;
4. multiplicar a matriz por um produto escalar;
5. imprimir a matriz.

O programa deve ler a dimensão e os dados. Após a leitura dos dados, deve ler um produto escalar para realizar a multiplicação.

## Exemplos de Uso

### Entrada de dados

```text
3
2 4 6
1 3 5
7 8 9
3
```

### Saída formatada

```text
Matriz Original:
2 4 6
1 3 5
7 8 9

Matriz Transposta:
2 1 7
4 3 8
6 5 9

Diagonal Principal: 2 3 9
Diagonal Secundária: 6 3 7

Matriz Multiplicada pelo Escalar (3):
6 12 18
3 9 15
21 24 27
```

## Arquivos aceitos

Este exercício aceita o seguinte tipo de arquivo:

- `Makefile`

> **Atenção:** Para ser corretamente corrigido, seu código, se entregue em um único arquivo ZIP, deve:
>
> - conter obrigatoriamente um arquivo `Makefile` na raiz do arquivo ZIP;
> - conter apenas o comando de compilação na diretiva `all` (será executado o comando `make all` para compilar o código);
> - conter apenas o comando de execução na diretiva `run` (será executado o comando `make run` para executar o código).