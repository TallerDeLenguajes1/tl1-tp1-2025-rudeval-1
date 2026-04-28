#include <stdio.h>

int cuadrado_de_un_numero(int num);
void cuadrado_de_un_numero_void(int * num);

void invertir(int *a,int *b);
void orden(int *a, int*b);


int main (){
    int numero = 2, cuadrado = cuadrado_de_un_numero(numero);
    printf("\nNumero: %d, Cuadrado: %d", numero, cuadrado);

    cuadrado_de_un_numero_void(&numero);
    printf("\nNumero modificado con void: %d", numero);


    int a, b;
    printf("\nIngrese el primer numero:");
        scanf("%d", &a);
    printf("\nIngrese el segundo numero:");
        scanf("%d", &b);
    
    printf("\nNumeros ingresados: a:%d y b:%d", a,b);
    invertir(&a,&b);
    printf("\nNumeros invertidos: a:%d , b:%d", a, b);
    orden(&a,&b);
    printf("\nNumeros ordenados (a es el mas chico): a:%d , b:%d", a, b);

    return 0;
}

int cuadrado_de_un_numero(int num){
    int cuadrado = num * num;
    return cuadrado;
}

void cuadrado_de_un_numero_void(int * num){
    int cuadrado = (*num) * (*num);
    *num = cuadrado;
}

void invertir(int *a,int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int*b){
    if (*a>*b)
    {
        int aux=*a;
        *a=*b;
        *b=aux;
    }  
}


