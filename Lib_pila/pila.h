/* pila.h cabecera */

typedef struct elemento {
    char *info;
    struct elemento *prox;
}nodo;

typedef struct cabecera {
  nodo *prim;
  int tamaño;
}pila;

void crear_pila (pila pila1);

int es_vacia (pila pila1);

void apilar (int val, pila pila1);

void desapilar (pila pila1);

int tope (pila pila1);

int longpila(pila pila1);