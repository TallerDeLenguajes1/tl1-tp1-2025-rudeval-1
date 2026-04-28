#include <stdio.h>
//renombrar funciones y variables de forma adecuada
void f_alpha(int *p) {
    int temp = *p; //*p = 452
    int rev = 0; //rev = 1 pero le asigna 0 (inicializar)
    while (temp > 0) {
        rev = (rev * 10) + (temp % 10); //0 + 2, 20+5(45%10), 250+4(4%10)
        temp = temp / 10; //45 (quita el ultimo digito), 4, 0
    }
    *p = rev; //contenido de p = rev = 254
}

void f_beta(int *p) {
    *p = *p / 2;
}

void f_gamma(int *p) {
    int temp = *p;
    int suma = 0;
    while (temp > 0) {
        suma = suma + (temp % 10);
        temp = temp / 10;
    }
    *p = *p + suma;
}

void procesar_enigma(int *valor_referencia) {
    f_alpha(valor_referencia);
    f_beta(valor_referencia);
    f_gamma(valor_referencia);
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