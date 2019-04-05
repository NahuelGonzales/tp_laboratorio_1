#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/** \brief Permite sumar dos valores de tipo float
 *
 * \param   x, y valores a sumar
 * \param   result variable para guardar el resultado de la suma
 * \return  devuelve el valor de la suma.
 *
 */
int suma(float x, float y)
{
    float result;
    result=x+y;
    return result;
}


/** \brief Permite restar dos valores de tipo float
 *
 * \param   x, y valores a restar
 * \param   result variable para guardar el resultado de la resta
 * \return  devuelve el valor de la resta
 *
 */
int resta(float x, float y)
{
    float result;
    result=x-y;
    return result;
}


/** \brief Permite la division de dos valores de tipo float
 *
 * \param   x, y valores a ser divididos
 * \param   result variable para guardar el resultado de la division
 * \return  devuelve el valor de la division
 *
 */
int division(float x, float y)
{
    float result=0;
    if(y==0)
    {
        printf("\nError, No se puede dividir por 0(cero).\n");
    }
    else
    {
        result=x/y;
    }
    return result;
}


/** \brief Permite multiplicar dos valores de tipo float
 *
 * \param   x, y valores a ser multiplicados
 * \param   result variable para guardar el resultado de la multiplicacion
 * \return  devuelve el valor de la multiplicacion
 *
 */
int multiplicacion(float x, float y)
{
    float result;
    result=x*y;
    return result;
}


/** \brief Calcula el factorial de un numero de tipo entero.
 *
 * \param x numero de tipo entero a ser factoreado.
 * \return devuelve el resultado de el factoreo.
 *
 */
int factorial(int x)
{
    int resp;
    int i;
    if(x==1)
    {
       resp=1;
    }
        else
        {
            for(i=x-1; i>1;i--)
            {
                x=x*i;
            }
            resp=x;
        }

return (resp);
}
