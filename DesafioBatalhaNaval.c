#include <stdio.h>
#include <stdlib.h>

#define TAM 10
#define HAB 5

// Inicializa o tabuleiro com água e alguns navios para demonstração
void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0; // Água
        }
    }

    // Exemplos de navios
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;
}

// Mostra o tabuleiro com representação visual
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Cria matriz de habilidade Cone (aponta para baixo)
void criarCone(int cone[HAB][HAB]) {
    for (int i = 0; i < HAB; i++) {
        for (int j = 0; j < HAB; j++) {
            cone[i][j] = 0;

            // Condições para formar cone
            if (j >= HAB / 2 - i && j <= HAB / 2 + i && i <= HAB / 2) {
                cone[i][j] = 1;
            }
        }
    }
}

// Cria matriz de habilidade Cruz
void criarCruz(int cruz[HAB][HAB]) {
    for (int i = 0; i < HAB; i++) {
        for (int j = 0; j < HAB; j++) {
            if (i == HAB / 2 || j == HAB / 2) {
                cruz[i][j] = 1;
            } else {
                cruz[i][j] = 0;
            }
        }
    }
}

// Cria matriz de habilidade Octaedro (forma de losango)
void criarOctaedro(int octaedro[HAB][HAB]) {
    for (int i = 0; i < HAB; i++) {
        for (int j = 0; j < HAB; j++) {
            if (abs(i - HAB / 2) + abs(j - HAB / 2) <= HAB / 2) {
                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;
            }
        }
    }
}

// Sobrepõe matriz de habilidade no tabuleiro, considerando ponto de origem
void aplicarHabilidade(int tabuleiro[TAM][TAM], int habilidade[HAB][HAB], int origem_linha, int origem_coluna) {
    for (int i = 0; i < HAB; i++) {
        for (int j = 0; j < HAB; j++) {
            if (habilidade[i][j] == 1) {
                int linha = origem_linha - HAB / 2 + i;
                int coluna = origem_coluna - HAB / 2 + j;

                if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM) {
                    if (tabuleiro[linha][coluna] != 3) { // Não sobrescreve navio
                        tabuleiro[linha][coluna] = 5;
                    }
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAM][TAM];
    int cone[HAB][HAB], cruz[HAB][HAB], octaedro[HAB][HAB];

    inicializarTabuleiro(tabuleiro);
    criarCone(cone);
    criarCruz(cruz);
    criarOctaedro(octaedro);

    // Pontos de origem das habilidades (exemplo)
    aplicarHabilidade(tabuleiro, cone, 3, 3);
    aplicarHabilidade(tabuleiro, cruz, 6, 6);
    aplicarHabilidade(tabuleiro, octaedro, 7, 2);

    printf("TABULEIRO COM HABILIDADES APLICADAS:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
