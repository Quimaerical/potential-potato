/* pila.h cabecera */
#include <stdio.h>
#include <stdlib.h>
#ifndef "_LIB_PILA_H_"
#define "_LIB_PILA_H_"

//defino la estructura del nodo 
typedef struct node {
    int info;
    struct node *prox;
}nodo;

//defino la estructura de la cabecera de la pila
typedef struct Pila{
  struct node *prim;
  int tamano;
}pila;

//funcion para crear una nueva pila
void crear_pila (pila test);

//funcion para verificar si la pila es vacia, si es vacia retorna 1 si no retorna 0
int es_vacia (pila test);

//funcion para añadir numeros en el tope de la pila 
void apilar (int val, pila test);

//funcion para desapilar numeros del tope de la pila
//no toma el numero, solo elimina el nodo tope
void desapilar (pila test);

//funcion para desapilar numeros del tope, retorna el numero del tope
int desapilar_tope (pila test);

//retorna el valor del tope de la pila
int tope (pila test);

//retorna el numero de elementos en la pila
int longpila(pila test);

void crear_pila (pila test){
	//asigno el apuntador de la cabecera de la pila a NULL y defino el tamaño a 0
	pila test->prim = NULL
	pila test.tamano = 0
}

int es_vacia (pila test){
	//si el tamaño de la pila es igual a 0 retorna 1, retorna 0 si no
	if (pila test.tamano == 0){
		return (1);
	}else{
		return (0);
	}
}

void apilar (int val, pila test){
	//declaro un apuntador p para no perder la ubicacion del primer nodo
	struct node *p;
	p = pila test->prim;
	//le asigno al apuntador en pila->prim un nodo vacio
	pila test->prim = (nodo*) malloc (sizeof(nodo));
	//uso la desreferencia para entrar al nodo recien creado 
	//y en el espacio del apuntador prox le asigno p (que apunta al anterior tope)
	nodo test->*prim->prox = p;
	//inserto el valor a apilar en el nuevo nodo
	nodo test->*prim->info = val;
	//aumento el tamano indicado por pila.tamano
	pila test.tamano++;
}

void desapilar (pila test){
	//declaro un apuntador p
	struct node *p;
	//apunto p a la direccion del nodo debajo del tope
	p = nodo test->*prim->prox;
	//hago que el nodo tope apunte a NULL
	nodo test->*prim->prox = NULL;
	//libero el espacio de memoria de este primer nodo, eliminando sus datos 
	free (nodo test->*prim);
	//apunto el apuntador de la cabecera al nodo que estaba debajo del tope
	pila test->prim = p;
	//reduzco el tamano indicado por pila.tamano
	pila test.tamano--;
}

int desapilar_tope (pila test){
	//declaro un apuntador p y una variable tope
	struct node *p;
	int dato;
	//guardo en la var dato la informacion del nodo tope
	dato = pila test->*prim->info;
	//apunto p a la direccion del nodo debajo del tope
	p = pila test->*prim->prox;
	//hago que el nodo tope apunte a NULL
	pila test->*prim->prox = NULL;
	//libero el espacio de memoria de este primer nodo, eliminando sus datos 
	free (nodo test->*prim);
	//apunto el apuntador de la cabecera al nodo que estaba debajo del tope
	pila test->prim = p;
	//reduzco el tamano indicado por pila.tamano
	pila test.tamano--;
	//retorno el valor del tope
	return (dato);
}

int tope (pila test){
	//retorno el valor del tope
	return (pila test->*prim->info);
}

int longpila(pila test){
	//retorno el valor guardado que indica el tamaño de la pila
	return (pila test.tamano);
}

#endif