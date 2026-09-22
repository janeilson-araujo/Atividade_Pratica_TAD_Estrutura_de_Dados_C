#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main()
{
    int quantidadePontos;
    float x, y;
    int pontoEscolhido1, pontoEscolhido2;
    PPontos p;

    if (scanf("%d", &quantidadePontos) == 0)
    {
        printf("Erro ao ler a quantidade de pontos.\n");
        return 0;
    }

    p = alocarPonto(quantidadePontos);

    for (int i = 0; i < quantidadePontos; i++)
    {
        scanf("%f", &x);
        scanf("%f", &y);
        criarPontos(p, i, x, y);
    }

    scanf("%d", &pontoEscolhido1);
    scanf("%d", &pontoEscolhido2);

    printf("Pontos lidos:\n");
    for (int i = 0; i < quantidadePontos; i++)
    {
        printf("%d: (%.1f, %.1f)\n", i+1 , exibirX(p, i), exibirY(p, i));
    }
    printf("\n");

    printf("pontos ecolhidos:\n");
    printf("ponto %d: (%.1f, %.1f)\n", pontoEscolhido1, exibirX(p, pontoEscolhido1 - 1), exibirY(p, pontoEscolhido1 - 1));
    printf("ponto %d: (%.1f, %.1f)\n", pontoEscolhido2, exibirX(p, pontoEscolhido2 - 1), exibirY(p, pontoEscolhido2 - 1));

    printf("\n");
    printf("Distância: %.1f\n", calcularDistancia(p, pontoEscolhido1 - 1, pontoEscolhido2 - 1));

    liberarPonto(p);

    return 0;
}