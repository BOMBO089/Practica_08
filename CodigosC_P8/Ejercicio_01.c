/*

Gonzalez Huerta Alonso  07 / 04 / 2025

Escriba un programa en C que muestre en pantalla los números enteros del 1 al 100.

*/

#include <stdio.h>

int main()
{
    int i = 1;
    

    for ( i = 1; i <= 100; i++)
    {

        printf("%i", i);
        printf(" , "); //Para mostrar en forma de sucesion

    }
   
    return 0;
}
