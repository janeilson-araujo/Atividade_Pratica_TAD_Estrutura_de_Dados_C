# Atividades Práticas de TAD em C

Repositório destinado às atividades práticas de Tipos Abstratos de Dados (TAD), desenvolvidas em linguagem C para a disciplina de Estrutura de Dados do IFCE - Campus Tianguá.

## Exercícios

### TAD Ponto

O exercício implementa um tipo abstrato para representar pontos em um espaço bidimensional. O programa deve:

- criar e armazenar `N` pontos;
- ler as coordenadas dos pontos;
- exibir os pontos escolhidos;
- calcular a distância entre dois pontos;
- liberar a memória alocada.

Enunciado completo: [Exercício: TAD Ponto](Exercicio:%20TAD%20Ponto/questao.md)

### TAD Matriz

O exercício implementa um tipo abstrato para representar matrizes quadradas com dimensão definida em tempo de execução. O programa deve:

- ler a dimensão e os elementos da matriz;
- exibir a matriz original;
- exibir a matriz transposta;
- mostrar as diagonais principal e secundária;
- multiplicar a matriz por um escalar;
- imprimir a matriz resultante.

Enunciado completo: [Exercício: TAD Matriz](Exercicio:%20TAD%20Matriz/questao.md)

## Execução

O exercício de ponto possui um `Makefile` configurado. Entre na pasta do exercício implementado e execute:

```bash
make all
```

Esse comando compila o programa.

Para executar o programa:

```bash
make run
```

Para remover os arquivos gerados pela compilação, quando o alvo estiver disponível:

```bash
make clean
```

## Organização do repositório

```text
.
├── README.md
├── Exercicio: TAD Matriz/
│   └── questao.md
└── Exercicio: TAD Ponto/
	├── Makefile
	├── main.c
	├── ponto.c
	├── ponto.h
	└── questao.md
```

## Regras de entrega

Para cada exercício, o arquivo `Makefile` deve ficar na raiz do arquivo ZIP entregue. O `Makefile` deve disponibilizar:

- o alvo `all` para compilar o código;
- o alvo `run` para executar o programa.

Os comandos de compilação e execução devem seguir o formato exigido no enunciado da atividade.
