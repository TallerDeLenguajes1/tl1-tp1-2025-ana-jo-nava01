#include <stdio.h>

int main() {

    printf("Hola mundo.\n");

    int var = 1;
    int *p = &var;

    printf("Contenido del puntero: %d\n", *p);
    printf("Direccion de memoria almacenada por el puntero: %p\n", p);
    printf("Direccion de memoria de la variable: %p\n", &var);
    printf("Direccion de memoria del puntero: %p\n", &p);
    printf("Tamaño de memoria utilizado por la variable: %d", sizeof(var));

    return 0;
}