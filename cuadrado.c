/*
Programa para el cálculo del área y el perímetro de un cuadrado
Enero 2018
@autor Paco González Moya
version 2.1
Conceptos del tema 3: funciones de cálculo y declaraciones mas funciones E/S
version 2.0
Conceptos del tema 3: funciones de cálculo y declaraciones
version 1.5
Conceptos del tema 3: funciones de cálculo
version 1.0 
Conceptos del tema 2, datos enteros, separar E/ - calculos - S/
version 0.5
Uso de los conceptos del tema 2
Observaciones: 
nuestro programa tiene que funcionar para valores naturales del lado 
entre entre 1 y 46340
*/

	//CABECERAS
#include <stdio.h>		//Cabecera estándar de entrada / salida

	//DECLARACIONES
//Declaraciones (prototipos)
int areaCuadrado (int l);
int perimetroCuadrado (int l);
int pideLadoCuadrado (int *refLado);

	//PROGRAMA PRINCIPAL
int
main ()
{
  int lado,			//variable de lectura de datos;
    area, perimetro;		//variables de cálculo
  int ok;

  printf ("\tPROGRAMA CUADRADO\n");
  printf ("\t=================\n");
  //Entrada
  ok = pideLadoCuadrado (&lado);

  //Cálculo
  area = areaCuadrado (lado);
  perimetro = perimetroCuadrado (lado);

  //Salida
  printf ("\tEl área del cuadrado de lado %d es: %d\n", lado, area);
  printf ("\tEl perímetro del cuadrado de lado %d es: %d\n\n", lado,
	  perimetro);
  return 0;
}

	//DEFINICIONES DE FUNCIONES
/*Función que pide por consola el valor del lado de un cuadrado
@param 	refLado		Entrada/ referencia al valor del lado del cuadrado
 	*refLado	/Salida	referencia del valor del lado
@return si se ha leido el dato
*/
int
pideLadoCuadrado (int *refLado)
{
  int l, ok;			//variables auxiliares de lectura de datos
  //Entrada de datos
  printf ("\tCalcula el área y el perímetro del cuadrado\n");
  printf ("Introduce el valor del lado del cuadrado [1, 46340]: ");
  ok = scanf ("%u", &l);
  *refLado = l;			//salida de datos de la funcion hacia el main
  return ok;
}



/*Función que calcula el área de un cuadrado
@param l 	Entrada/ valor del lado del cuadrado
@return 	/Salida del valor del área del cuadrado
*/
int
areaCuadrado (int l)
{
  return l * l;
}

/*Función que calcula el perímetro de un cuadrado
@param l	Entrada/ el valor del lado del cuadrado
@return		/Salida el valor del perímetro del cuadrado
 */
int
perimetroCuadrado (int l)
{
  return 4 * l;
}
