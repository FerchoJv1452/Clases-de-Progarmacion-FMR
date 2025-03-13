#include<stdio.h>
#include <unistd.h>

int main()
{
    char Bolita = 'O';
    char matriz[3][3] =
    {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
    };

    matriz[0][0] = Bolita;
    for (int i = 0; i < 9; i++)
    {
        printf("\n\t\t\t\t   Este es el tablero actual\n\n");
        printf("\t\t\t\t\t+---+---+---+\n");
        for (int i = 0; i < 3; i++)
        {
            printf("\t\t\t\t\t");
            for (int j = 0; j < 3; j++)
            {
                printf("| %c ", matriz[i][j]);
            }
            printf("|\n\t\t\t\t\t+---+---+---+\n");
        }

        int posicion = 0;
        for (int l = 0; l < 3 && !posicion; l++)
        {
            for (int m = 0; m < 3 && !posicion; m++)
            {
                if (matriz[l][m] == 'O')
                {
                    matriz[l][m] = '-';
                    if (m < 2)
                        matriz[l][m + 1] = Bolita;
                    else if (l < 2)
                        matriz[l + 1][0] = Bolita;
                    posicion = 1;
                }
            }
        }
        sleep(2);
    }

    return 0;
}
