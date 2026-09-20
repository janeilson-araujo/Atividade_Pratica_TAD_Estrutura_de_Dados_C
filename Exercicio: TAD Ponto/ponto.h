#ifndef PONTO_H
#define PONTO_H

typedef struct Ponto Ponto;
typedef Ponto *PPontos;

PPontos alocarPonto(int quantidadePontos);

void criarPontos(PPontos p, int i, float x, float y);

float calcularDistancia(PPontos p, int pontoEscolhido1, int PontoEscolhido2);

float exibirX(PPontos p, int i);

float exibirY(PPontos p, int i);

void liberarPonto(PPontos p);

#endif