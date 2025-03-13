#include <stdio.h>

int main ()
{
    int menu;
    do {
        printf("\n\nElige que quieres hacer:\n");
        printf("1. Sacar Numero Factorial\n");
        printf("2. Contar vocales y consonantes en tu nombre\n");
        printf("3. Saber si un numero es primo\n");
        printf("0. Salir\n");
        printf("Opcion: ");
        scanf("%d", &menu);
    switch (menu)
    {
        case 1:
        {
        int numero, factorial = 1;
        int i;
        printf("Ingresa un numero positivo: ");
        scanf("%d", &numero);

        if (numero > 0)
        {
        for (i = 1; i <= numero; i++)
        {
            factorial *= i;
        }
        printf ("El factorial del numero %d es %d", numero, factorial);
        }
        else
        {
        printf("Ese no es un numero positivo");
        }
        break;
        }
        case 2:
        {
        char nombre[100];
        int k;
        int a;
        int c = 0;
        int d = 0;
        printf("\n\nIngresa tu nombre:  ");
        scanf("%s", nombre);
        for (k=0; nombre[k] != '\0'; k++)
        {
        a = nombre[k];

        if(a == 'a'|| a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A'|| a == 'E' || a == 'I' || a == 'O' || a == 'U')
        {
            printf ("%c es una vocal\n", a);
            c += 1;

        }
        else
        {
            printf("%c es una consonante\n", a);
            d += 1;
        }

        }
        printf("\n\nHay %d vocales", c);
        printf(" y hay %d consonantes", d);
        break;
        }
        case 3:
        {
        int num;
        int primo;
        int j;
        int seguir = 1;
        while (seguir)
        {
        printf("\n\nElige un numero cualquiera: ");
        scanf("%d", &num);
        if (num <=1)
        {
            printf("No es un numero primo");
        }
        else
        {
            primo = 1;


            for (j = 2; j * j <= num; j++)
            {
                if (num % j == 0)
                {
                    primo = 0;
                    break;
                }
            }

        }


        switch (primo)
        {
                case 1:
                    printf("El numero %d es primo.\n", num);
                    break;
                case 0:
                    printf("El numero %d no es primo.\n", num);
                    break;

        }
        printf("\n\nQuieres verificar otro numero (1 para continuar, 0 para salir): ");
        scanf("%d", &seguir);
        }
        break;
        }

        case 0:
                printf("Saliendo del programa...\n");
                break;

        default:
                printf("Opcion invalida, intenta de nuevo.\n");
    }

    }
    while (menu != 0);




    return 0;
}
