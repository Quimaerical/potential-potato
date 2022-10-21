/* pila.h cabecera */

typedef struct nodo {
    char *info;
    struct nodo *prox;
}nodo;

typedef struct pila {
  nodo *prim;
  int tamaño;
}pila;

void crear_pila (pila pila1);

int es_vacia (pila pila1);

void apilar (int val, pila pila1);

void desapilar (pila pila1);

int desapilar_tope (pila pila1);

int tope (pila pila1);

int longpila(pila pila1);