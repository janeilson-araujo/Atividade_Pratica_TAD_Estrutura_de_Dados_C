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
    Ptmatriz matriz = allocarMatriz(dimensao, produto);

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

void matrizTrasportada(Ptmatriz matriz)
{
    
}
