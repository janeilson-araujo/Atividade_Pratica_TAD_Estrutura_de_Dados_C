#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tmatriz.h"

typedef struct
{
    int dimensao;
    int **dados;
    int produto;
} tmatriz, *Ptmatriz;

Ptmatriz alocarMatriz(int n)
{
    Ptmatriz matriz = (Ptmatriz)malloc(sizeof(tmatriz));

    matriz->dimensao = n;
    matriz->produto = 0;

    matriz->dados = (int **)malloc(matriz->dimensao * sizeof(int *));
    for (int i = 0; i < matriz->dimensao; i++)
    {
        matriz->dados[i] = (int *)malloc(matriz->dimensao * sizeof(int));
    }
    return matriz;
}

Ptmatriz lerMatriz(void)
{
    int dimensao;
    int produto;
    scanf("%d", &dimensao);
    Ptmatriz matriz = alocarMatriz(dimensao);

    for (int i = 0; i < matriz->dimensao; i++)
    {
        for (int j = 0; j < matriz->dimensao; j++)
        {
            scanf("%d", &matriz->dados[i][j]);
        }
    }

    scanf("%d", &produto);
    matriz->produto = produto;

    return matriz;
}

void imprimirMatrizOriginal(Ptmatriz matriz)
{
    printf("Matriz Original:\n");
    for (int i = 0; i < matriz->dimensao; i++)
    {
        for (int j = 0; j < matriz->dimensao; j++)
        {
            printf("%d", matriz->dados[i][j]);
        }
        printf("\n");
    }
}

void imprimirMatrizTrasportada(Ptmatriz matriz)
{
    printf("Matriz Transposta::\n");
    for (int i = 0; i < matriz->dimensao; i++)
    {
        for (int j = 0; j < matriz->dimensao; j++)
        {
            printf("%d", matriz->dados[j][i]);
        }
        printf("\n");
    }
}

void imprimirDiagonais(Ptmatriz matriz)
{
    int cont_diagonal = 0;

    printf("Diagonal Principal:");
    for (int i = 0; i < matriz->dimensao; i++)
    {
        for (int j = 0; j < matriz->dimensao; j++)
        {
            if (j == cont_diagonal)
            {
                printf("%d", matriz->dados[i][j]);
            }
            cont_diagonal++;
        }
    }

    cont_diagonal = matriz->dimensao;

    printf("Diagonal Secundária:");
    for (int i = 0; i < matriz->dimensao; i++)
    {
        for (int j = 0; j < matriz->dimensao; j++)
        {
            if (j == cont_diagonal)
            {
                printf("%d", matriz->dados[i][j]);
            }
            cont_diagonal--;
        }
    }
}

void inprimirMatrizMulti(Ptmatriz matriz)
{
    printf("Matriz Multiplicada pelo Escalar (%d):\n", matriz->produto);
    for (int i = 0; i < matriz->dimensao; i++)
    {
        for (int j = 0; j < matriz->dimensao; j++)
        {
            printf("%d", matriz->dados[i][j] * matriz->produto);
        }
        printf("\n");
    }
}