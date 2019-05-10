#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[], int tamLista)
{
    int i;
    int indice=-1;
    for(i=0;i < tamLista; i++)
    {
        if(lista[i].estado == -1)
        {
            indice=i;
            break;
        }
    }
    return indice;
}


/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int tamLista, int dni)
{
    int indice =-1;
    for(int i=0;i < tamLista; i++)
    {
        if(lista[i].dni == dni && lista[i].estado == 1)
        {
            indice= i;
            break;
        }
    }
    return indice;
}


/** \brief
 *Borra a una persona cambiandole el campo de estado de la persona por -1
 * \param listaDePersonas[] EPersona Recibimos el vector de pesonas
 * \param tam int recive el tamaño del vector
 * \param dni int recive el dni de la persona, la cual servira para identificar la persona a borrar
 * \return void
 *
 */
int borrarPersona(EPersona listaDePersonas[], int tam, int dni)
{
    int i;
    int result=0;
    for(i=0;i<tam;i++)
    {
        if(listaDePersonas[i].dni==dni)
        {
            listaDePersonas[i].estado=-1;
            result=1;
            break;
        }
    }
    return result;
}


/**
 * \brief Inicializa el status en un array de productos
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param value Es el valor que se asignara a estatus
 * \return -
 *
 */
void predifinirValores(EPersona personas[],int tamLista,int valor)
{
    int i;
    for(i=0;i<tamLista; i++)
    {
        personas[i].estado=valor;
    }
}

/** \brief
 *
 * \param x int le pasamos el primer numero
 * \param y int le pasamos el segundo numero
 * \param z int le pasamos el tercer numero
 * \return int nos devuelve el numero mas grande de los 3
 *
 */
int buscarMayor(int x,int y,int z)
{
    int mayor;
    if(x>y && x>z)
    {
        mayor=x;
    }
    else
    {
        if(y>x&&y>z)
        {
            mayor=y;
        }
        else
        {
            mayor=z;
        }
    }
    return mayor;
}

/** \brief Calcula la cantidad de personas que hay en el array.
 *
 * \param lista[] EPersona array de personas
 * \param tam  tamaño del array
 * \return cantidad es el numero de personas que hay en el array.
 *
 */
int cantPersonas(EPersona lista[],int tam)
{
    int cantidad=0;
    int i;
    for(i=0;i<tam;i++)
    {
        if(lista[i].estado==1)
        {
            cantidad++;
        }
    }
    return cantidad;
}



/** \brief Muestra los datos de una persona por pantalla
 *
 * \param persona EPersona persona a ser mostrada
 */
void mostrarPersona(EPersona persona)
{
    if(persona.estado != -1)
    {
        printf("\n%d --- %d --- %s",persona.dni,persona.edad,persona.nombre);
    }
}

/** \brief Muestra los datos de un array de personas por pantalla
 *
 * \param personas[] EPersona array de personas a ser mostradas
 * \param tam tamño de el array
 */
void mostrarPersonas(EPersona personas[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        mostrarPersona(personas[i]);
    }
}

/** \brief
 *
 * \param rango1 int le enviamos la cantidad que pertencen al rango 1
 * \param rango2 int le enviamos la cantidad que pertencen al rango 1
 * \param rango3 int le enviamos la cantidad que pertencen al rango 1
 * \return solo nos muestra el grafico de asteriscos
 *
 */
void graficoDeBarras(int rango1, int rango2, int rango3)
{
    int i, flag=0, mayor;

    if(rango1 >= rango2 && rango1 >= rango3){
        mayor = rango1;
    }else{
        if(rango2 >= rango1 && rango2 >= rango3)
        {
            mayor = rango2;
        }
        else{
        mayor = rango3;
        }
    }

    for(i=mayor; i>0; i--){
        if(i<10){
            printf("%02d|",i);
        }
        else
            printf("%02d|",i);

        if(i<= rango1){
            printf("*");
        }
        if(i<= rango2){
            flag=1;
            printf("\t*");
        }
        if(i<= rango3){
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }
        //Bajo una linea luego de cada iteracion
        printf("\n");
    }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d", rango1, rango2, rango3);
}

//VALIDAR UNA CADENA DE CARACTERES
/** \brief Valida la longitud de una cadena
 *
 * \param cadena[] es la cadena de caracteres que ingresa
 * \param tam es la longitud maxima a validar de la cadena
 * \return rslt devuelve 0 si la cadena no ves valida, y 1 si la cadena es valida
 *
 */
int validarCadena(char cadena[], int tam)
{
    int rslt=0;
    if(strlen(cadena)<tam)
    {
        rslt=1;
    }
    return rslt;
}
