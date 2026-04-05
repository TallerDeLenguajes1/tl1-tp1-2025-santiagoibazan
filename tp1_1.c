#include <stdio.h>

void main() {
    printf("Hola mundo \n");

    int num = 79014;
    int *puntero;
    puntero = &num;

    printf("Contenido del puntero: %d \n", *puntero);
    printf("Direccion de memoria almacenada por el puntero: %p \n", puntero);
    printf("Direccion de memoria de la variable: %p \n", &num);
    printf("Direccion de memoria del puntero: %p \n", &puntero);
    printf("Tamanio de memoria de la variable: %d \n", sizeof(num));
    return;
}