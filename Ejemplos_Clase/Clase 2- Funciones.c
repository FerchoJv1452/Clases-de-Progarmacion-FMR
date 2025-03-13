#include <stdio.h>
int suma(int a, int b, int rr)
{
    rr=a+b;
    return 0;
}
int main()
{
    int x=10;
    int y=20;
    int resultado=0;
    suma(x, y, resultado);
    printf("%d", resultado);
    return 0;
}