#include <stdio.h>
int main()
{
/*  int A [5];
    printf("\n%d,", A);

    printf("\n%d", &A);

    printf("\n%d", &A[0]);

    int numeros[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        printf("Elemento %d: %d\n", i, numeros[i]);
    }
    */

    int matriz [3][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0;  j < 3; j++)
        {
            printf("Elemento[%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }
    
    return 0;
}
