/*
Nombre		:	40circu.c	
Simposis	:	El programa pide un radio y muestra el valor de la longi			tud de su circunferencia y el área de su circulo
Ejecución	:	40circu
Directivas	:	Compilar en modo ansi, con todos los avisos activos, 
			compilado con gcc
Salida		:	Lista de códigos de salida de la aplicación
			Devuelve 0.
Organización	:	LSI.IC.UBu
Autor		:	CPA
Fecha		:	30-oct-2006
Versión		:	v2.0
Lista versiones	:	
			v2.0 30-oct-06 versión con funciones
			v1.0 1-sep-02 versión inicial
Copyright	:	Programa pertenece a CPA.LSI.IC.UBu. 
			Este programa puede (debe) difundirse entre los alumnos
 			para aprender C
*/	

#include<stdio.h> /*Directivas al preprocesador*/
#define PI 3.1416 /*cte.*/

/**Calcula la longitud de una circunferencia de radio r.
@param r E/ del valor del radio
@return la longitud*/
double longCircun(double r){
return 2 * PI * r;
}

/**Calcula la área de un circulo de radio r.
@param r E/ del valor del radio
@return el área*/
double areaCircul(double radio){
return PI * radio * radio;
}

int main(){ /*Definición de la función ppal.*/
	double radio,
	longitud, area;
	printf("\tIntroduce un radio de la circunferencia ");
	scanf("%lf", &radio);
	longitud = longCircun(radio);
	area = areaCircul(radio);
	printf("Circunferencia: %f\tCirculo %f\n",longitud,area);
	return 0;
}
