#include <stdio.h>
//renombrar funciones y variables de forma adecuada

void invertir_numero(int *p) {
    int aux = *p; //*p = 452
    int numeroInvertido = 0; //rev = 1 pero le asigna 0 (inicializar)
    while (aux > 0) {
        numeroInvertido = (numeroInvertido * 10) + (aux % 10); //0 + 2, 20+5(45%10), 250+4(4%10)
        aux = aux / 10; //45 (quita el ultimo digito), 4, 0
    }
    *p = numeroInvertido; //contenido de p = rev = 254
}

void dividir_en_2(int *p) {
    *p = *p / 2; //divide en 2 a la vble que apunta p (rev=254)
} 
//*p = rev/2 = 127

void sumar_digitos(int *p) { //temp=0
    int temp = *p; //temp = 127
    int suma = 0; //inicializa suma
    while (temp > 0) {
        suma = suma + (temp % 10); // suma=0+7 , suma=7+2 , suma= 9+1
        temp = temp / 10; //temp=12 , temp=1 , temp=0
    }
    *p = *p + suma; //*p = 127 + 10 = 137
}

void procesar_enigma(int *valor_referencia) {
    invertir_numero(valor_referencia); //valor_referencia = &dato_secreto
    dividir_en_2(valor_referencia);
    sumar_digitos(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}