# Exercício: Criando e Manipulando o Tipo Abstrato Ponto

## Objetivo

Praticar a definição e manipulação de tipos abstratos de dados, utilizando uma estrutura que represente informações e funcionalidades sobre pontos em um espaço bidimensional.

## Enunciado

Especifique e implemente um Tipo Abstrato de Dados chamado `TADPonto`, para representar pontos no espaço bidimensional. Este TAD deve permitir criar um ponto, liberar a memória alocada para um ponto e calcular a distância entre dois pontos.

O programa principal (`main.c`) deve ler as coordenadas de `N` pontos e, em seguida, os dois pontos cuja distância deve ser calculada. Ao final, deve imprimir a distância entre esses pontos.

Para isso, deverá:

- criar espaço para os `N` pontos;
- ler os dados;
- calcular e mostrar a distância;
- liberar a memória alocada para os pontos.

## Exemplos de Uso

### Entrada de dados

```text
5
1.0 1.0
3.0 4.0
-1.0 -1.0
2.5 3.5
0.0 0.0
2 4
```

### Saída formatada

```text
Pontos lidos:
1: (1.0, 1.0)
2: (3.0, 4.0)
3: (-1.0, -1.0)
4: (2.5, 3.5)
5: (0.0, 0.0)

Pontos escolhidos:
Ponto 2: (3.0, 4.0)
Ponto 4: (2.5, 3.5)

Distância: 0.71
```


## Arquivos aceitos

Este exercício aceita o seguinte tipo de arquivo:

- `Makefile`

> **Atenção:** Para ser corretamente corrigido, seu código, se entregue em um único arquivo ZIP, deve:
>
> - conter obrigatoriamente um arquivo `Makefile` na raiz do arquivo ZIP;
> - conter apenas o comando de compilação na diretiva `all` (será executado o comando `make all` para compilar o código);
> - conter apenas o comando de execução na diretiva `run` (será executado o comando `make run` para executar o código).