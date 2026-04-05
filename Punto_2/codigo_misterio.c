#include <stdio.h>

void invertir_numero(int *num) { // invierte el numero
    int aux = *num;
    int numeroInvertido = 0;
    while (aux > 0) {
        numeroInvertido = (numeroInvertido * 10) + (aux % 10);
        aux = aux / 10;
    }
    *num = numeroInvertido;
}

void mitad_numero(int *num) { // divide el numero por 2
    *num = *num / 2;
}

void sumarle_sus_digitos(int *num) { // suma los digitos del numero y lo suma a su valor
    int aux = *num;
    int suma = 0;
    while (aux > 0) {
        suma = suma + (aux % 10);
        aux = aux / 10;
    }
    *num = *num + suma;
}

void invertirDividirSumarDigitos(int *valor_referencia) {
    invertir_numero(valor_referencia);
    mitad_numero(valor_referencia);
    sumarle_sus_digitos(valor_referencia);
}

int main() {
    int dato_secreto = 452;

    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    invertirDividirSumarDigitos(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}
