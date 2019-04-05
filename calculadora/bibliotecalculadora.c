#include "bibliotecalculadora.h"
#include <stdio.h>
#include <stdlib.h>

float sumarNumeros(float x, float y)
{
    float suma;
    suma=x+y;
    return suma;
}
float restarNumeros(float x, float y)
{
    float resta;
    resta = x-y;
    return resta;
}
float multiplicarNumeros(float x, float y)
{
    float multiplicacion;
    multiplicacion = x*y;
    return multiplicacion;
}
float dividirNumeros(float x, float y)
{
    float division;
    division = x/y;
    return division;
}
float factorial(float x)
{
     float factorial=1;
    float i;
    for(i=x;i>1;i--)
    {
       factorial=factorial*i;
    }
    return factorial;

}
