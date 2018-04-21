/*
Programa 	:	e_lateral.c
Sinopsis	:	Ejemplo que ilustra la presencia de un efecto lateral
			que es indeseable en programación y se puede resolver
			de forma sencilla
Autor		:	Paco González Moya
Fecha		:	feb 2018
Version		:	1.0	
Observaciones	:	Esto NO SE HACE. Se propirciona el ejemploa  efectos
			docentes		

*/

#include<stdio.h>
int valor_general=1234;

int function_A();
int function_B();

int funcion_A() {
	int x=0;
	x++;
	valor_general=0xAA;
	return 0;
}

int funcion_B() {
	int x=0;
	x++;
	valor_general=0xBB;
	return 0;
}




int main() {
	printf("\nEfectos laterales (indseseable)\n");
	printf("Valor inicial : %d\n", valor_general);
	funcion_A();
	printf("Valor después de función A: %d\n", valor_general);
	funcion_B();
	printf("Valor después de función B: %d\n", valor_general);
	return 0;
}
