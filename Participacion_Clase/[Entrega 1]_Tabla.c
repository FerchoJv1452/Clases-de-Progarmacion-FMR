#include <stdio.h>
int main()
{
    int num_1;
    int num_2;
    printf("Ingresa un numero del 1 al 10: ");
    scanf("%d", &num_1);
    printf("Ingresa un numero del primer numero al 10: ");
    scanf("%d", &num_2);
    if (num_1 <=10 && num_2 <= 10 && num_2 >= num_1)
    {
        int tabla [num_1][num_2];
        printf("  |\t");
        for (int j = num_1; j <= num_2; j++)
        {
        printf(" %d\t", j);
        }
    printf("\n---");
    for (int j = num_1; j <= num_2; j++)
    {
        printf("--------------");
    }
    printf("\n");

    for (int i = num_1; i <= num_2; i++)
    {
        printf("%d |\t", i);

        printf("\n");
    }

    }else {
        printf ("Esos numeros no son validos");
    }

return 0;
}
