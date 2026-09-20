#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

typedef struct Ponto
{
    float x;
    float y;
} Ponto, *PPontos;

PPontos alocarPonto(int quantidadePontos)
{
    PPontos p = (PPontos)calloc(quantidadePontos, sizeof(Ponto));
    return p;
}

void criarPontos(PPontos p, int i, float x, float y)
{
    p[i].x = x;
    p[i].y = y;
}

float exibirX(PPontos p, int i) {
    return p[i].x;
}

float exibirY(PPontos p, int i) {
    return p[i].y;
}

float calcularDistancia(PPontos p, int pontoEscolhido1, int PontoEscolhido2)
{
    return sqrt(pow(p[pontoEscolhido1].x - p[PontoEscolhido2].x, 2) + pow(p[pontoEscolhido1].y - p[PontoEscolhido2].y, 2));
}

void liberarPonto(PPontos p)
{
    free(p);
}