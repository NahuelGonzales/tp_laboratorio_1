#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

int obtenerEspacioLibre(EPersona lista[], int tamLista);
int buscarPorDni(EPersona lista[], int tamanioLista, int dni);
int borrarPersona(EPersona listaDePersonas[], int tam, int dni);
void predifinirValores(EPersona personas[],int tamLista,int valor);
void mostrarPersona(EPersona persona);
int cantPersonas(EPersona lista[],int tam);
void graficoDeBarras(int rango1, int rango2, int rango3);
void mostrarPersonas(EPersona personas[],int tam);
#endif // FUNCIONES_H_INCLUDED
