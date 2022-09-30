#include <stdio.h>
//
int termino1=5;
int termino2=15;
int termino=5;



int Secu(){
    termino1=termino2;
    termino2=termino;
    termino=termino*3;
    return termino;
}
int main()
{
    int numero;
    printf("ingresa un numero\n:");
    scanf("%i",&numero);
    printf("5\n");

    for(int i=0; i<numero; i++)
    {
        printf("%d\n", Secu());
    }
    return 0;
}