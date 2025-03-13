#include <stdio.h>
int main ()
{


    // Sin estructura de control a la antiguita
    int a = 0;
    inicio:
    if (a>=10) goto fin;
    printf("%d\n", a);
    a++;
    goto inicio;
    fin:
    
    // Usando Estructura de control como ahora
    for (int i=0; i<10; i++)
    {
        printf("%d\n", i);
    }

    // Anidamiento de if 
    int edad = 18;
    if(edad>=18)
    {
        printf("Eres mayor de edad.\n");
        if(edad==18)
        {
            printf("Felicidades por tus 18 primaveras!\n");
        }
    }else 
    {
        printf("Eres menor de edad.\n");
    }
    //Anidamiento de for y if 
    for (int i=1; i<=10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d es par.\n", i);
        }else 
        {
            printf("%d es impar.\n", i);
        }
    }
    // Anidamiento de for y if Numeros primos
    int numero , esPrimo = 1;
    int b = 1;
    printf("Ingrese un numero:  ");
    scanf("%d", &numero);
    for(int i = 2; i*i <= numero; i++)
    {
        if (numero % i == 0)
        {
            esPrimo = 0;
            b = i;
            break;
        }
    }
    if (esPrimo)
    {
        printf("%d es un numero primo.\n", numero);
    }else
    {
        for (int j=b; j<=numero; j+=b)
        {
            printf("%d\n", j);
        }
    }

    return 0;
}




