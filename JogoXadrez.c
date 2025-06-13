#include <stdio.h>

// TORRE
void recursivo1(int torre)
{
    if (torre >= 0)
    {
        recursivo1(torre - 1);
        printf("Direita\n");
    }
}
// RAINHA
void recursivo2(int rainha)
{
    if (rainha >= 0)
    {
        recursivo2(rainha - 1);
        printf("Esquerda\n");
    }
}
// BISPO
void recursivo3(int bispo)
{
    if (bispo >= 0)
    {
        recursivo3(bispo - 1);
        printf("Cima\n");
    }
}

int main()
{
    int casasTorre1 = 5, casasRainha = 8, casasBispo = 1;

    // TORRE
    printf("A torre andará 5x para a direita\n");
    recursivo1(casasTorre1 - 1);

    // RAINHA
    printf("\nA rainha andará 8x para a esquerda\n");
    recursivo2(casasRainha - 1);

    // BISPO
    printf("\nO bispo andará 5x para a cima- diagonal\n");
    for (int casasbispo = 0; casasbispo < 5; casasbispo++)
    {
        recursivo3(casasBispo - 1);
        printf("Esquerda\n");
    }

    // CAVALO
    printf("\nO Cavalo andará em L\n");
    for (int i = 1, j = 0; i <= 2 && j <= 1; i++, j++)
    {
        if (i <= 2)
        {
            printf("Cima\n");
        }
        if (j <= 2)
        {
            if (j == 0)
            {
                continue;
            }
            printf("Direita\n");
        }
    }
    return 0;
}
