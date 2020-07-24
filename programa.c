#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char palabra[50], palabra1[50];
    int i, caracteres_alfabeticos = 0;
    int caracteres_alfa1 = 0;

    printf("Ingrese la primera palabra:\n");
    gets(palabra);
    printf("Ingrese la segunda palabra:\n");
    gets(palabra1);

    while (palabra[i] != 0)
    {
        if (isalpha(palabra[i]))
        {
            caracteres_alfabeticos++;
        }
        if (isalpha(palabra1[i]))
        {
            caracteres_alfa1++;
        }
        i++;
    }

    printf("Primera palabra ingresada: %s\n", palabra);
    printf("Segunda palabra ingresada: %s\n", palabra1);
    printf("La primera palabra contiene %d caracteres\nLa segunda palabra contiene %d caracteres\n", caracteres_alfabeticos, caracteres_alfa1);

    return 0;
}