#include <stdio.h>
#include <stdlib.h>
#include "tmatriz.h"

int main()
{
    Ptmatriz matriz;

    matriz = lerMatriz();

    imprimirMatrizOriginal(matriz);

    imprimirMatrizTrasportada(matriz);

    imprimirDiagonais(matriz);

    inprimirMatrizMulti(matriz);

    desalocarMatriz(matriz);

    return 0;
}