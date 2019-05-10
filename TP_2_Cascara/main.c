#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define tamanioLista 21

int main()
{
    EPersona personas[tamanioLista];//DECLARAMOS EL ARRAY
    predifinirValores(personas,tamanioLista-1,-1);//INICIALIZAMOS TODO EL ARRAY COMO VACIO
    char seguir='s';
    int opcion;//DECLARAMOS CONTADORES DE RANGOS
    int rango1=0;
    int rango2=0;
    int rango3=0;
    int i,j,dniABorrar,tamArray;
    int indice=0;
    int aux,valido;
    EPersona auxPersona;

    while(seguir=='s')
    {
        system("cls");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                indice=obtenerEspacioLibre(personas,tamanioLista);
                //printf("%d\n",indice);
                if(indice==-1 || indice>=20)
                {
                    printf("NO HAY LUGAR PARA DAR DE ALTA\n");
                    break;
                }
                else
                {

                    printf("Ingrese un dni: ");
                    fflush(stdin);
                    scanf("%d",&aux);
                    valido=buscarPorDni(personas,tamanioLista,aux);
                    while(valido!=-1)
                    {
                        printf("Error, el dni ya fue ingresado. Ingrese otro: ");
                        fflush(stdin);
                        scanf("%d",&aux);
                        valido=buscarPorDni(personas,tamanioLista,aux);
                    }
                    fflush(stdin);
                    auxPersona.dni=aux;
                    printf("Ingrese un nombre:");
                    gets(auxPersona.nombre);
                    printf("Ingrese edad: ");
                    fflush(stdin);
                    valido=(scanf("%d",&aux));
                    //Valido que ingrese un numero;
                    while(valido!=1)
                    {
                        printf("\nError. El valor ingresado deve se un numero. Reingrese: ");
                        fflush(stdin);
                        valido=(scanf("%d", &aux));
                    }
                    auxPersona.edad=aux;
                    auxPersona.estado=1;
                    personas[indice]=auxPersona;
                    printf("\nPERSONA AGREGADA CORRECTAMENTE.\n\n");

                    system("pause");
                }
                break;
            case 2:
                system("cls");
                printf("Ingrese el dni del empleado que desea borrar \n");
                fflush(stdin);
                scanf("%d",&dniABorrar);
                if(borrarPersona(personas,tamanioLista,dniABorrar)==1)
                {
                    printf("PERSONA BORRADA CORRECTAMENTE.\n\n");
                    system("cls");
                    system("pause");
                }
                break;
            case 3:
                system("cls");
                for(i=0; i < tamanioLista - 1; i++)
                {
                    for(j=i+1; j < tamanioLista; j++)
                    {
                        if(personas[i].estado != -1 && personas[j].estado != -1)
                        {
                            if(strcmp(personas[j].nombre,personas[i].nombre)==-1)
                            {
                                auxPersona = personas[i];
                                personas[i] = personas[j];
                                personas[j] = auxPersona;
                            }
                        }
                    }
                }
                printf("DNI----EDAD- ---NOMBRE\n");
                mostrarPersonas(personas,tamanioLista-1);
                printf("\n");

                system("pause");
                break;
            case 4:
                system("cls");
                tamArray=cantPersonas(personas,tamanioLista-1);
                printf("%d\n",tamArray);
                for(i=0;i<tamanioLista-1;i++)
                {
                    if(personas[i].edad<=18 && personas[i].estado==1)
                    {
                        rango1++;
                    }
                    if(personas[i].edad>=19 && personas[i].edad<=35 && personas[i].estado==1)
                    {
                        rango2++;
                    }
                    if(personas[i].edad>35 && personas[i].estado==1)
                    {
                        rango3++;
                    }
                }
                graficoDeBarras(rango1,rango2,rango3);
                printf("\n\n");
                rango1=0;
                rango2=0;
                rango3=0;

                system("pause");
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
