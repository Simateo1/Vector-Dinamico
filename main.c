#include <stdio.h>
#include <stdlib.h>

#include "vector.h"

int main()
{
    Vector *v;
    int resultado;

    v = crearVector();

    if (v == NULL) {
        printf("Error al crear el vector.\n");
        return 1;
    }

    mostrarVector(v);

    resultado = insertar(v, 30);

    if (resultado != 0) {
        printf("Error al insertar.\n");
    }

    resultado = insertar(v, 10);

    if (resultado != 0) {
        printf("Error al insertar.\n");
    }

    resultado = insertar(v, 50);

    if (resultado != 0) {
        printf("Error al insertar.\n");
    }

    resultado = insertar(v, 20);

    if (resultado != 0) {
        printf("Error al insertar.\n");
    }

    resultado = insertar(v, 40);

    if (resultado != 0) {
        printf("Error al insertar.\n");
    }

    resultado = insertar(v, 60);

    if (resultado != 0) {
        printf("Error al insertar.\n");
    }

    printf("Vector cargado:\n");
    mostrarVector(v);

    printf("\nCantidad de elementos: %d\n", getTam(v));

    printf("\nBuscando elementos:\n");

    printf("Posicion del 50: %d\n", indexOf(v, 50));
    printf("Posicion del 100: %d\n", indexOf(v, 100));

    printf("\nVector antes de ordenar:\n");
    mostrarVector(v);

    ordenar(v);

    printf("\nVector ordenado:\n");
    mostrarVector(v);

    destruirVector(v);

    return 0;
}
