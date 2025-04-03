#include <stdio.h>

//Calcular el numero de pares e impares pero que solo muestre el ultimo de cada uno, el usuario dice la cantidad de numeros

int main()
{
    int a, res, i;
    int par, imp;

    
    
    printf("Cuntos numeros desea cualcular (impares y pares): ");
    scanf("%i", &a);
    printf("\n");

    
    

    for ( i = 1; i <= a; i++)
    {
        if (a % 2 == 0)
        {
            par = i;
        }
        if (a % 2 != 0)
        {
            imp = i;
        } 
    }

    printf("El ultimo par es: %i\n", par);
    printf("El ultimo impar es: %i\n", imp);    
        

    return 0;
}
