/* pila.h cabecera */
#include <stdio.h>
#include <stdlib.h>

//defino la estructura del nodo 
typedef struct node {
    int info;
    struct node *prox;
}nodo;

//defino la estructura de la cabecera de la pila
typedef struct{
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
	pila.prim = NULL
	pila.tamano = 0
}

int es_vacia (pila test){
	//si el tamaño de la pila es igual a 0 retorna 1, retorna 0 si no
	if (pila.tamano == 0){
		return (1);
	}else{
		return (0);
	}
}

void apilar (int val, pila test){
	//declaro un apuntador p para no perder la ubicacion del primer nodo
	struct node *p;
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

void desapilar (pila test){
	//declaro un apuntador p
	struct node *p;
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

int desapilar_tope (pila test){
	//declaro un apuntador p y una variable tope
	struct node *p;
	int dato;
	//guardo en la var dato la informacion del nodo tope
	dato = pila.*prim.info;
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
	return (dato);
}

int tope (pila test){
	//retorno el valor del tope
	return (pila.*prim.info);
}

int longpila(pila test){
	//retorno el valor guardado que indica el tamaño de la pila
	return (pila.tamano);
}