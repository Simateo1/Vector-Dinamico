#include <stdio.h>
#include <stdlib.h>

#include "vector.h"

struct VectorDinamico {
    int *datos;
    int tam;
    int capacidad;
};

Vector* crearVector(void)
{
    Vector *v;

    v = malloc(sizeof(Vector));

    if (v == NULL) {
        return NULL;
    }

    v->capacidad = 4;
    v->tam = 0;

    v->datos = malloc(v->capacidad * sizeof(int));

    if (v->datos == NULL) {
        free(v);
        return NULL;
    }

    return v;
}

void destruirVector(Vector* v)
{
    if (v != NULL) {
        free(v->datos);
        free(v);
    }
}

int insertar(Vector* v, int elemento)
{
    int nuevaCapacidad;
    int *aux;

    if (v->tam == v->capacidad) {

        nuevaCapacidad = v->capacidad * 2;

        aux = realloc(v->datos, nuevaCapacidad * sizeof(int));

        if (aux == NULL) {
            return 1;
        }

        v->datos = aux;
        v->capacidad = nuevaCapacidad;
    }

    v->datos[v->tam] = elemento;
    v->tam++;

    return 0;
}

int getTam(Vector* v)
{
    return v->tam;
}

int indexOf(Vector* v, int elemento)
{
    int i;

    for (i = 0; i < v->tam; i++) {

        if (v->datos[i] == elemento) {
            return i;
        }
    }

    return -1;
}

void ordenar(Vector* v)
{
    int i;
    int j;
    int aux;

    for (i = 0; i < v->tam - 1; i++) {

        for (j = 0; j < v->tam - 1 - i; j++) {

            if (v->datos[j] > v->datos[j + 1]) {

                aux = v->datos[j];
                v->datos[j] = v->datos[j + 1];
                v->datos[j + 1] = aux;
            }
        }
    }
}

void mostrarVector(Vector* v)
{
    int i;

    for (i = 0; i < v->tam; i++) {
        printf("%d ", v->datos[i]);
    }

    printf("\n");
}
