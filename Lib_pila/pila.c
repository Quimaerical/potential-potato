#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
//funcion para crear una nueva pila
void crear_pila (pila pila1){
	//asigno el apuntador de la cabecera de la pila a NULL y defino el tamaño a 0
	pila.prim = NULL
	pila.tamano = 0
}

int es_vacia (pila pila1){
	//si el tamaño de la pila es igual a 0 retorna 1, retorna 0 si no
	if (pila.tamano == 0){
		return (1);
	}else{
		return (0);
	}
}

void apilar (int val, pila pila1){
	//declaro un apuntador p para no perder la ubicacion del primer nodo
	int *p;
	p = pila.prim;
	//le asigno al apuntador en pila.prim un nodo vacio
	pila.prim = (nodo*) malloc (sizeof(nodo));
	//uso la desreferencia para entrar al nodo recien creado 
	//y en el espacio del apuntador prox le asigno p (que apunta al anterior tope)
	pila.*prim.prox = p;
	//inserto el valor a apilar en el nuevo nodo
	pila.*prim.info = val
	//aumento el tamano indicado por pila.tamano
	pila.tamano = pila.tamano+1;
}

void desapilar (pila pila1){
	//declaro un apuntador p
	int *p;
	//apunto p a la direccion del nodo debajo del tope
	p = pila.*prim.prox;
	//hago que el nodo tope apunte a NULL
	pila.*prim.prox = NULL;
	//libero el espacio de memoria de este primer nodo, eliminando sus datos 
	free (pila.*prim);
	//apunto el apuntador de la cabecera al nodo que estaba debajo del tope
	pila.prim = p;
	//reduzco el tamano indicado por pila.tamano
	pila.tamano = pila.tamano-1;
}

int desapilar_tope (pila pila1){
	//declaro un apuntador p y una variable tope
	int *p;
	int tope;
	//guardo en la var tope la informacion del nodo tope
	tope = pila.*prim.info;
	//apunto p a la direccion del nodo debajo del tope
	p = pila.*prim.prox;
	//hago que el nodo tope apunte a NULL
	pila.*prim.prox = NULL;
	//libero el espacio de memoria de este primer nodo, eliminando sus datos 
	free (pila.*prim);
	//apunto el apuntador de la cabecera al nodo que estaba debajo del tope
	pila.prim = p;
	//reduzco el tamano indicado por pila.tamano
	pila.tamano = pila.tamano-1;
	//retorno el valor del tope
	return (tope);
}

int tope (pila pila1){
	//retorno el valor del tope
	return (pila.*prim.info);
}

int longpila(pila pila1){
	//retorno el valor guardado que indica el tamaño de la pila
	return (pila.tamano);
}