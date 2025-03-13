#include <stdio.h>

int main()
{
    //Arreglos unidimensionales

    int A;
    A = 103;
    printf("Valor de A: %d\n\n", A);
    printf("Direccion de Memoria de A: %d\n\n", &A);

    int B;
    B = 492;
    printf("Valor de B: %d\n\n", B);
    printf("Direccion de Memoria de B: %d\n\n", &B);

    int C [3];
    C[0] = 666;
    C[1] = 999;
    C[2] = 888;

    printf("Valor de C[0]: %d\n\n", C[0]);
    printf("Valor de C[1]: %d\n\n", C[1]);
    printf("Valor de C[2]: %d\n\n", C[2]);
    printf("Direccion de Memoria de C: %d\n\n", &C);



    int D [100];
    int j;
    for (j=100; j>=0; j--)
    {
    D [j] = j * 10;
    printf ("El valor de D[%d] es : %d\n", j, D[j]);
    }

    int i;
    int k;
    int E [3][3];
    E [2][2] = 55;
    E [1][2] = 120;
    E [0][2] = 70;
    E [2][1] = 160;
    E [1][1] = 180;
    E [0][1] = 170;
    E [2][0] = 21;
    E [1][0] = 33;
    E [0][0] = 23;
    printf("%d",E [2][1] );

    return 0;
}
