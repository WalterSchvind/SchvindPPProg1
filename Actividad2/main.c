#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int contarCaracteres(char cadena[],char letra);

int main()
{
    char cadena[20];
    char letra;
    int letrasContadas;
    printf("Escriba la cadena: ");
    fflush(stdin);
    scanf("%s",cadena);

    printf("\nEscriba el caracter: ");
    fflush(stdin);
    scanf("%c",&letra);

    letrasContadas=contarCaracteres(cadena,letra);
    printf("cantidad de veces que se repite %c: %d",letra,letrasContadas);
    return 0;
}
int contarCaracteres(char cadena[], char caracter)
{
    int contadorCaracteres = 0;
    int i = 0;

    while(cadena[i] != '\0')
    {
        if(cadena[i]==caracter)
        {
            contadorCaracteres++;
        }
        i++;
    }
    return contadorCaracteres;
}
