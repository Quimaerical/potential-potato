#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

void crear_pila (pila pila1){
	pila.prim = NULL
	pila.tamaño = 0
}

int es_vacia (pila pila1){
	if (pila.tamaño == 0){
		return (1);
	}else{
		return (0);
	}
}

void apilar (int val, pila pila1){
	int *p;
	p = pila.prim;
	pila.prim = (nodo*) malloc (sizeof(nodo));
	pila.*prim.prox = p;
	pila.tamaño = pila.tamaño+1;
}

void desapilar (pila pila1){
	int *p;
	p = pila.*prim.prox;
	pila.*prim.prox = NULL;
	free (pila.*prim);
	pila.prim = p;
	pila.tamaño = pila.tamaño-1;
}

int desapilar_tope (pila pila1){
	int *p;
	int tope;
	tope = pila.*prim.info;
	p = pila.*prim.prox;
	pila.*prim.prox = NULL;
	free (pila.*prim);
	pila.prim = p;
	pila.tamaño = pila.tamaño-1;
	return (tope);
}

int tope (pila pila1){
	return (pila.*prim.info);
}

int longpila(pila pila1){
	return (pila.tamaño);
}