#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main(){
	int i;
	int num;
	int	longi;
	struct pila test;
	crear_pila ( struct pila test );
	if ( es_vacia(struct pila test) == 1 ){
		printf ( "Pila vacia creada \n\n" );
	}else{
		printf ("ERROR");
		return (0);
	}
	
	for (i=0; i<=10; i++){
		i = i+1;
		apilar (int i, struct pila test);
	}
	longi = longpila(struct pila test);
	printf ( "la longitud de la pila es de: %d \n", longi );
	num = tope(struct pila test);
	printf ( "el valor del tope es: %d \n", num );
	while ( es_vacia(struct pila test) == 0 ){
		num = desapilar_tope (struct pila test);
		printf ( "el valor del tope es: %d \n", num ); 
	}
	return (0);
}