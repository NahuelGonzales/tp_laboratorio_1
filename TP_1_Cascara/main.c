#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s'; //Declaramos e inicializamos la variable que nos permite iterar nuestro while
    int opcion=0; //es la variable que guardara la opcion de la operacion a seleccionar
    float resultSuma;
    float resultResta;
    float resultMulti;
    float resultDivi;
    float resultFactorial;
    float aux;
    int flag=0;
    int auxFactorial;
    int valido;
    float primerOperando = 0 ;
    float segundoOperando = 0;

    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A= %.2f)\n",primerOperando);
        printf("2- Ingresar 2do operando (B= %.2f)\n",segundoOperando);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                    printf("Ingrese el primer numero:");
                    fflush(stdin);
                    valido=(scanf("%f",&aux));
                    //Valido que ingrese un numero;
                    while(valido!=1)
                    {
                        printf("\nError. El valor ingresado deve se un numero. Reingrese: ");
                        fflush(stdin);
                        valido=(scanf("%f", &aux));
                    }
                    primerOperando=aux;
                    flag=1;
                break;
            case 2:
                if(flag!=0 || flag ==1)
                {
                    printf("Ingrese el segundo numero:");
                    fflush(stdin);
                    valido=(scanf("%f",&aux));
                    //Valido que ingrese un numero;
                    while(valido!=1)
                    {
                        printf("\nError. El valor ingresado deve se un numero. Reingrese: ");
                        fflush(stdin);
                        valido=(scanf("%f", &aux));
                    }
                    segundoOperando=aux;
                    flag=2;
                }
                break;
            case 3:
                if(flag==2)
                {
                    resultSuma=suma(primerOperando,segundoOperando);
                    printf("El resultado de la suma es: %.2f\n",resultSuma);
                }
                else
                {
                    printf("\n Porfavor ingrese los numeros primero.\n");
                }
                break;
            case 4:
                if(flag==2)
                {
                    resultResta=resta(primerOperando,segundoOperando);
                    printf("El resultado de la resta es: %.2f\n",resultResta);
                }
                else
                {
                    printf("\n Porfavor ingrese los numeros primero.\n");
                }
                break;
            case 5:
                if(flag==2)
                {
                    resultDivi=division(primerOperando,segundoOperando);
                    printf("El resultado de la division es: %.2f\n",resultDivi);
                }
                else
                {
                    printf("\n Porfavor ingrese los numeros primero.\n");
                }
                break;
            case 6:
                if(flag==2)
                {
                    resultMulti=multiplicacion(primerOperando,segundoOperando);
                    printf("El resultado de la multiplicacion es: %.2f\n",resultMulti);
                }
                else
                {
                    printf("\n Porfavor ingrese los numeros primero.\n");
                }
                break;
            case 7:
                if(flag==2 || flag==1)
                {
                    auxFactorial=(int)(primerOperando);
                    resultFactorial=factorial(auxFactorial);
                    printf("El resultado del factorial es: %.2f\n\n",resultFactorial);
                }
                else
                {
                    printf("\n Porfavor ingrese los numeros primero.\n");
                }
                break;
            case 8:
                if(flag==2)
                {
                    resultSuma=suma(primerOperando,segundoOperando);
                    printf("El resultado de la suma es: %.2f\n",resultSuma);
                    resultResta=resta(primerOperando,segundoOperando);
                    printf("El resultado de la resta es: %.2f\n",resultResta);
                    resultDivi=division(primerOperando,segundoOperando);
                    printf("El resultado de la division es: %.2f\n",resultDivi);
                    resultMulti=multiplicacion(primerOperando,segundoOperando);
                    printf("El resultado de la multiplicacion es: %.2f\n",resultMulti);
                    aux=(int)(primerOperando);
                    resultFactorial=factorial(aux);
                    printf("El resultado del factorial es: %.2f\n\n",resultFactorial);
                }
                else
                {
                    printf("\n Porfavor ingrese los numeros primero.\n");
                }
                break;
            case 9:
                seguir = 'n';
                break;

            default:
                printf("Porfavor ingrese una de las opciones.\n");

        }
        system("pause");
        system("cls");
    }
    return 0;
}
