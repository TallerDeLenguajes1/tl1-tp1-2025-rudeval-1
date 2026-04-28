#include <stdio.h>

int main (){
    printf("hola mundo\n");

    int variable = 10, *puntero = &variable;
    printf("Contenido del puntero: %d \n", *puntero);
    printf("Direccion de memoria almacenada por el puntero: %p \n", puntero);
    printf("Direccion de memoria de la variable: %p \n", &variable);
    printf("Direccion de memoria del puntero: %p \n", &puntero);
    printf("Tamano de memoria utilizado por esa variable: %zu \n", sizeof(variable));





    return 0;
}