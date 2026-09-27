#ifndef __TMATRIZ_H__
#define __TMATRIZ_H__

typedef struct Tmatriz tmatriz;
typedef tmatriz *Ptmatriz;

Ptmatriz lerMatriz(void);

void imprimirMatrizOriginal(Ptmatriz matriz);

void imprimirMatrizTrasportada(Ptmatriz matriz);

void imprimirDiagonais(Ptmatriz matriz);

void inprimirMatrizMulti(Ptmatriz matriz);

void desalocarMatriz(Ptmatriz matriz);

#endif