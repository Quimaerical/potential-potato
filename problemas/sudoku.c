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
para los 4 recuadros compartidos.
*/

void sudoku_inicial ( ){
	//el archivo debe llamarse sudoku.md y cada elemento debe ser un 0, numero o espacio
	f = fopen ( "sudoku.md", "r" );
	
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


void llenar_celdas ( int sudoku, int i, int j ){
	bool safe;
	
	while (  && essol==0 ){
		testnum ( sudoku, safe, i, j );
		if ( safe == 1 ){
			//almacenar paso
			if ( sudoku_lleno == 1 ){
				printmatriz ( sudoku );
			}else{
				llenar_celdas ( sudoku, i, j);
				if ( essol == 0 ){
					//borrar paso
				}
			}
		}
	}
}

int testnum ( int sudoku, bool safe, int i, int j ){
	int col;
	int fil;
	int n;
	//9x9 izq arriba
	if ( ( i < 6 && j < 9 )&&( i < 9 && j < 6 ) ){
		for ( n = 1; n <= 9; n++ ){
			
			for ( col = 0; col < 9; col++ ){
				for ( fil = 0; fil < 9; fil++ ){
					if ( sudoku[col][fil] != n ){
						return (n);
					}
				}
			}
		}
	}
	//cuadricula de [6][6]
	if ( ( i >= 6 && j >= 6 )&&( i <= 8 && j <= 8 ) ){
		for ( n = 1; n <= 9; n++ ){
			
			for ( col = 0; col < 15; col++ ){
				for ( fil = 0; fil < 15; fil++ ){
					if ( sudoku[col][fil] != n ){
						return (n);
					}
				}
			}
		}
	}
	//9x9 izq abajo
	if ( ( i < 6 && j > 11 )&&( i < 9 && j > 14 ){
		for ( n = 1; n <= 9; n++ ){
			
			for ( col = 0; col < 9; col++ ){
				for ( fil = 12; fil <= 20; fil++ ){
					if ( sudoku[col][fil] != n ){
						return (n);
					}
				}
			}
		}
	}
	//cuadricula de [6][12]
	if ( ( i >= 6 && j >= 12 )&&( i <= 8 && j <= 14 ) ){
		for ( n = 1; n <= 9; n++ ){
			
			for ( col = 0; col < 15; col++ ){
				for ( fil = 6; fil < 21; fil++ ){
					if ( sudoku[col][fil] != n ){
						return (n);
					}
				}
			}
		}
	}
	//9x9 der arriba
	if ( ( i > 11 && j < 6 )&&( i > 14 && j < 9 ) ){
		
	}
	//cuadricula de [12][6]
	if ( ( i >= 12 && j >= 6 )&&( i <=14 && j <= 8 ) ){
		
	}
	//9x9 der abajo
	if ( ( i > 11 && j > 14 )&&( i > 14 && j > 11 ) ){
		
	}
	//cuadricula de [12][12]
	if ( ( i >= 12 && j >= 12 )&&( i <= 14 && j <= 14 ) ){
		
	}
	//9x9 central
	if ( ( i >= 6 && j <= 14 )&&( i <= 14 && j >= 6 ) ){
		
	}
}

int main(){
	int sudoku [21][21];
	FILE *f;
	sudoku_inicial ( int sudoku, FILE f );
	llenar_celdas ( int sudoku );
	return (0);
}