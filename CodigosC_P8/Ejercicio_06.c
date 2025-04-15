/*

Gonzalez Huerta Alonso  07 / 04 / 2025

Escriba un programa que pida al usuario un número, y muestre el mensaje "has
introducido el numero ---" (mostrando el número que ha sido introducido). Esta acción
debe repetirse hasta que el usuario introduzca el número 0. En ese momento se
mostrará el mensaje "Finalizando: Se ha introducido el número 0". Además, se debe
mostrar cuántos números se han introducido y su suma.


*/

#include <stdio.h>

int main()
{
    int num, sum = 0, contador = -1;// contador = -1 para que no cuente el 0
    do
    {
        printf("-------------------------------------\n");
        printf("Ingrese un numero: ");
        scanf("%i", &num);
        printf("\n");
        printf("-------------------------------------\n");
        printf("Has introducido el numero: %i\n", num);
        contador++;
        sum = sum + num;


    } while (num != 0);
    
    printf("--------------------------------------------------------\n");
    printf("Finalizado : Se ha introducido el numero 0\n");
    printf("\n");
    printf("La suma de los numeros es: %i\n", sum);
    printf("\n");
    printf("El total de numeros introducidos es: %i\n", contador);

    return 0;
}
