#include <stdio.h>
#include <stdlib.h>

/*	Sudoku	

Para el sudoku entrelazado o sudoku samurai se siguen las reglas convencionales del sudoku clásico pero con una vuelta.
En el sudoku clasico se deben ir colocando numeros del uno al 9 de manera que no se repitan: ni en ese recuadro ( tomando cada
recuadro como un espacio de 3x3 celdas ), ni en esa fila ( tomando todos los valores "n" de la matriz tal que sudoku[n][j] ) 
ni en esa columna ( valores "n" de la matriz sudoku[i][n] ).

El sudoku samurai convierte el espacio de un sudoku clasico, una matriz de 9x9 celdas, a una matriz de 21x21 celdas y 
se rellenan las celdas de forma similar, pero tomando en cuenta que: en los 4 recuadros que se comparten entre los 4 
sectores externos y el central se debe tomar en cuenta que no se repitan los valores de las celdas ni en la fila del 
sector central, ni en la fila del sector externo al que pertenezca ni en la columna del sector central, ni en la columna
del sector al que pertenezca ni en ese mismo recuadro. Es decir en el caso de tomar la celda vacia en la posición [8][8]
tomaremos en cuenta que el valor escogido no se repita en la fila [n][8], pero únicamente hata llegar a la posicion [15][8],
tampoco deberá estar repetido en la columna [8][n], pero unicamente hasta llegar a la posicion [15][8] y asi sucesivamente 
para los 4 recuadros compartidos
*/

int main(){
	
}

void llenar_celdas (){
	
	while ( /*existan alternativas*/ && essol==0 ){
		/*probarcelda*/
		if ( es_seguro == 1 ){
			sudoku [i][j] = ;
			if ( sudoku lleno == 1 ){
				printmatriz ( int sudoku );
			}else{
				llenar_celdas ();
				if ( essol==0 ){
					sudoku [i][j] = 0
					
				}
			}
				
		}
	}
}

/*proc buscar_una_solucion(T: paso) 
inicio 
 inicializar_alternativas() 
 mientras ( existen_alternativas() ∧ ¬sol_encontrada ) hacer 
  obtener_siguiente_alternativa() 
  si ( es_alternativa_válida() ) entonces 
   almacenar_paso() 
   si ( es_solución() ) entonces 
    sol_encontrada ← verdadero 
    procesar_solución() 
   sino 
    buscar_una_solucion(nuevo_paso) 
    si ( ¬sol_encontrada ) entonces 
     borrar_paso() 
    fsi 
   fsi 
  fsi 
 fmientras 
fproc */