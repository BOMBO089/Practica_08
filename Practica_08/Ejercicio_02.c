#include <stdio.h>

int main()
{
    int res= 0, num, i=1;


    do
    {

        printf("----------------------------\n");
        printf("Vuelta: %i\n",i);
        printf("Ingrese un numero: ");
        scanf("%i", &num);

        res = res + num;
        i = i + 1;


    } while (i <= 10 && res <100);

    printf("Suma total : %i\n", res);
    printf("Vuelta: %i\n", i);
    
    return 0;
}
