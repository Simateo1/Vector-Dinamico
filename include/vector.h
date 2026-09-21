#ifndef VECTOR_H
#define VECTOR_H

struct VectorDinamico;
typedef struct VectorDinamico Vector;

Vector* crearVector(void);
void destruirVector(Vector* v);
int insertar(Vector* v, int elemento);
int getTam(Vector* v);
int indexOf(Vector* v, int elemento);
void ordenar(Vector* v);
void mostrarVector(Vector* v);

#endif
