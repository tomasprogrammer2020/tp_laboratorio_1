#include <stdio.h>
#include <stdlib.h>
#include "bibliotecalculadora.h"


int main()
{
    int opcion;
    float numeroUno=0;
    float numeroDos=0;
    float resultadoSumar;
    float resultadoRestar;
    float resultadoMultiplicar;
    float resultadoDividir;
    float resultadoFactorial;
    float resultadoFactorialDos;

    char seguir = 's';
    do
    {
        printf("1. Ingresar primer operando\n2. Ingresar segundo operando\n3. Calcular todas las operaciones\n4. Informar resultados\n5. Salir\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingrese el primer operando: ");
            scanf("%f", &numeroUno);
            break;
        case 2:
            printf("Ingrese el segundo operando: ");
            scanf("%f", &numeroDos);
            break;
        case 3:
           resultadoSumar = sumarNumeros(numeroUno,numeroDos);
           resultadoRestar = restarNumeros(numeroUno,numeroDos);
           resultadoMultiplicar = multiplicarNumeros(numeroUno,numeroDos);
           resultadoDividir = dividirNumeros(numeroUno,numeroDos);
           resultadoFactorial = factorial(numeroUno);
           resultadoFactorialDos = factorial(numeroDos);

            break;
        case 4:
            printf("El resultado de la suma es: %f\n", resultadoSumar);
            printf("El resultado de la resta es: %f\n", resultadoRestar);
            printf("El resultado de la multiplicacion es: %f\n", resultadoMultiplicar);
            printf("El resultado de la division es: %f\n", resultadoDividir);
            printf("El resultado del factorial del primer numero ingresado es: %f\n", resultadoFactorial);
            printf("El resultado del factorial del segundo numero ingresado es: %f\n", resultadoFactorialDos);

            break;
        case 5:
            seguir = 'n';
            break;

        }
        system("pause");
        system("cls");
    }
    while(seguir=='s');
}
