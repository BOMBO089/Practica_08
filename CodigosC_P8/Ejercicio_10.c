/*

Gonzalez Huerta Alonso  07 / 04 / 2025

Escriba un programa en C que solicite números al usuario hasta que se hayan 
introducido 10 números o la suma de todos los números leídos sea mayor que 100. A 
continuación mostrar un mensaje indicando qué condición se ha cumplido (es decir, si 
se han introducido 10 números o si su suma es mayor que 100).

*/

#include <stdio.h>

int main()
{
    int num, i = 1;
    int sum = 0;

    do
    {

        printf("-------------------------\n");
        printf("Vuelta: %i\n", i);
        printf("Ingrese un numero: ");
        scanf("%i", &num);
        printf("\n");
        sum = sum + num;
        i++;

    } while (sum < 100 && i < 10);
    
    if (sum >= 100)
    {
        printf("La suma de los numeros es: %i\n", sum);
        printf("\n");
        printf("La suma ha superado 100\n");
    }
    
    if (i >= 10)
    {
        printf("Se han alcanzado 10 intentos\n");
    }
    
    return 0;
}
