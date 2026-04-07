#include <stdio.h>
#include <math.h>

int cuadrado(int num) {
    num = pow(num, 2);

    return num;
}

void cuadrado_void(int *num) {
    *num = pow(*num, 2);
}

void invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b) {
    int aux;
    if(*a > *b) {
        aux = *b;
        *b = *a;
        *a = aux;
    }
}

int main() {
    int numero, cuad, a, b;

    printf("Ingrese el numero: ");
    scanf("%d", &numero);

    printf("Direccion de la memoria: %p\n", &numero);
    printf("Contenido de la variable: %d\n", numero);

    cuad = cuadrado(numero);
    printf("Cuadrado con funcion que devuelve: %d\n", cuad);
    cuadrado_void(&numero);
    printf("Cuadrado con funcion void: %d\n", numero);

    printf("Ingrese el valor a: ");
    scanf("%d", &a);

    printf("Ingrese el valor b: ");
    scanf("%d", &b);

    invertir(&a, &b);
    printf("==Numeros invertidos==\n");
    printf("Valor a es ahora: %d\n", a);
    printf("Valor b es ahora: %d\n", b);

    orden(&a, &b);
    printf("==Numeros en orden==\n");
    printf("Valor a es ahora: %d\n", a);
    printf("Valor b es ahora: %d\n", b);

    return 0;
}