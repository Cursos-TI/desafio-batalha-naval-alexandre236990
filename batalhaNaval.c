#include <stdio.h>
#include <stdlib.h>

int x;
int y;
int jogo;

void tabuleiro()
{
    printf("Tabuleiro:        0 1 2 3 4 5 6 7 8 9\n");
    printf("                ***********************\n");
    printf("           0 -->* 0 0 3 0 0 0 0 0 0 0 *\n");
    printf("           1 -->* 0 0 0 0 0 0 0 0 0 0 *\n");
    printf("           2 -->* 0 0 0 0 0 0 0 0 0 0 *\n");
    printf("           3 -->* 0 0 0 0 0 3 0 0 0 0 *\n");
    printf("           4 -->* 0 0 0 0 3 0 0 0 3 0 *\n");
    printf("           5 -->* 0 0 0 3 0 0 0 3 0 0 *\n");
    printf("           6 -->* 0 0 3 0 0 0 3 0 0 0 *\n");
    printf("           7 -->* 0 0 0 0 0 3 0 0 0 0 *\n");
    printf("           8 -->* 0 0 0 0 0 0 0 0 0 0 *\n");
    printf("           9 -->* 0 0 0 0 0 0 0 0 0 3 *\n");
    printf("                ***********************\n\n");
}

void cone()
{
    printf("*********\n");
    printf("* 00100 *\n");
    printf("* 01110 *\n");
    printf("* 11111 *\n");
    printf("*********\n\n");
}

void cruz()
{
    printf("*********\n");
    printf("* 00100 *\n");
    printf("* 11111 *\n");
    printf("* 00100 *\n");
    printf("*********\n\n");
}

void octaedro()
{
    printf("*********\n");
    printf("* 00100 *\n");
    printf("* 01110 *\n");
    printf("* 00100 *\n");
    printf("*********\n\n");
}

void inicio()
{
    printf("\nEntre com a primeira coordenada sendo 0 a 9 para tenta acertar o navio: ");
    scanf("%d", &x);

    printf("\nEntre com a segunda coordenada sendo 0 a 9 para tenta acertar o navio: ");
    scanf("%d", &y);
}

void inicioJogo()
{

    int navio[10][10] = {

        {0, 0, 3, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 1, 0, 1, 1, 1, 1, 1, 0},
        {0, 1, 1, 1, 0, 0, 1, 0, 0, 0},
        {1, 1, 1, 1, 1, 3, 0, 0, 0, 0},
        {0, 0, 0, 0, 3, 0, 0, 0, 3, 0},
        {0, 0, 0, 3, 0, 0, 0, 3, 0, 0},
        {0, 0, 3, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 1, 0, 3, 0, 0, 0, 0},
        {0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 3}

    };

    inicio();

    system("cls");

    if (navio[x][y] == 3)
    {

        printf("\n\nParabens Vc acertou o navio!!!\n\n");

        tabuleiro();

        voltarInicio();
    }
    else if ((x == 1 && y == 2) || (x == 2 && y == 1) || (x == 2 && y == 2) || (x == 2 && y == 3) || (x == 3 && y == 0) || (x == 3 && y == 1) || (x == 3 && y == 2) || (x == 3 && y == 3) || (x == 3 && y == 4))
    {
        printf("\n\nVc acertou uma armadinha!!!\n\n");

        cone();

        voltarInicio();
    }
    else if ((x == 0 && y == 6) || (x == 1 && y == 4) || (x == 1 && y == 5) || (x == 1 && y == 6) || (x == 1 && y == 7) || (x == 1 && y == 8) || (x == 2 && y == 6))
    {
        printf("\n\nVc acertou uma armadinha!!!\n\n");

        cruz();

        voltarInicio();
    }
    else if ((x == 7 && y == 3) || (x == 8 && y == 2) || (x == 8 && y == 3) || (x == 8 && y == 4) || (x == 9 && y == 3))
    {
        printf("\n\nVc acertou uma armadinha!!!\n\n");

        octaedro();

        voltarInicio();
    }

    else
    {

        printf("\n\nVc errou o navio!!!\n\n");

        tabuleiro();

        voltarInicio();
    }
}

void voltarInicio()
{

    printf("Digite 1 pra jogar novamente ou precione qualquer tecla pra finalizar o jogo: ");
    scanf("%d", &jogo);

    if (jogo == 1)
    {
        system("cls");

        inicioJogo();
    }
    else if (jogo != 1)

    {
        system("cls");
        printf("**** FIM DE JOGO ****\n\n");
    }
}

int main()
{

    inicioJogo();

    return 0;
}