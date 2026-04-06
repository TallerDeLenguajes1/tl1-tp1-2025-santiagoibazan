#include <stdio.h>

int potencia_dos(int num) {
    return (num * num);
}

void potencia_dos_b(int *num) {
    *num = ((*num) * (*num));
    return;
}

void mostrarDireccionValor(int x) {
    printf("Direccion de memoria: %p - Valor: %d \n", &x, x);
}

void invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b) {
    int aux;
    if (*a > *b) {
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

void main() {
    int valor1, valor2;
    printf("Ingrese valor1: ");
    scanf("%d", &valor1);
    printf("\n");
    printf("Ingrese valor2: ");
    scanf("%d", &valor2);
    printf("\n");

    int valor1Aux = valor1;

    printf("potencia_dos: %d \n", potencia_dos(valor1));
    potencia_dos_b(&valor1Aux);
    printf("potencia_dos_b: %d \n", valor1Aux);
    mostrarDireccionValor(valor1);
    printf("\nAntes de funcion inverir \n valor1: %d - valor2: %d \n", valor1, valor2);
    invertir(&valor1, &valor2);
    printf("Despues de funcion inverir \n valor1: %d - valor2: %d \n", valor1, valor2);

    printf("\nAntes de funcion orden \n valor1: %d - valor2: %d \n", valor1, valor2);
    orden(&valor1, &valor2);
    printf("Despues de funcion orden \n valor1: %d - valor2: %d \n", valor1, valor2);

    return;
}