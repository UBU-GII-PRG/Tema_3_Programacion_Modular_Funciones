/*----------------------------------------------+
|Nombre: 42tMult.c 				|
|Sinopsis: El programa muestra las tablas de 	|
| multiplicar de un número en base decimal, 	|
| en base octal y en base hexadecimal 		|
|Descripción de la ejecución del programa: 	|
| c:>42tMult 					|
|Directivas de compilación: 			|
| Compilar en modo ansi, con todos los 		|
| avisos activos, compilado con bcc 		|
|Lista de códigos de salida de la aplicación:	|
| Devuelve 0. 					|
|Organización: LSI.IC.UBu 			|
|Autor: CPA 					|
|Fecha: 1-sep-2002 				|
|Versión: v3.0 					|
|Lista de versiones: 				|
| v4.0 26-oct-07 f() y generar n tablas. 	|
| v3.0 1-sep-02 usar expresiones y vari. 	|
| v2.9 1-sep-02 usar expresiones 		|
| v2.0 22-ago-02 usar % y ctes: 22Mult5.c 	|
| v1.0 21-ago-02 comentado prg: 12Mult5.c 	|
| v0.1 20-ago-02 versión inicial 		|
|Información del copyright del programa: 	|
| Programa pertenece a CPA.LSI.IC.UBu 		|
| Este programa puede (debe) difundirse 	|
| entre los alumnos para aprender C 		|
+-----------------------------------------------*/

/*Directiva al preprocesador*/
#include<stdio.h>

/*Declaración de funciones (prototipos) */
int pideEntero(void); /*(prototipos)*/
void tMult(int n);

/*Definición del módulo ppal.*/
int main(){
	tMult(pideEntero());
	return 0;
}

/*Definición de otros módulos*/
/**Pide un número y lo lee del teclado.
@return el número leído*/
int pideEntero(void){
	int n;
	printf("Introduce un número ");
	scanf("%u", &n);
	return n;
}

/**Muestra las tablas de un nº en base
10, 8, y 16.
@param n E/ número de la tabla a mostrar
@return nada*/
void tMult(int n){
	int i=0, x=0;
	printf("\tTablas de multiplicar del %d\nen base 10\t en base 8\ten base 16\n",n);
	printf("%u *%2u =%4u\t%o *%2o =%4o\t%X *%2X =%4X\n", i,n,x, i,n,x,i,n,x);
	i++; x+=n; /*1*/
	printf("%u *%2u =%4u\t%o *%2o =%4o\t%X *%2X =%4X\n", i,n,x, i,n,x,i,n,x);
	i++; x+=n; /*2*/
	printf("%u *%2u =%4u\t%o *%2o =%4o\t%X *%2X =%4X\n", i,n,x, i,n,x, i,n,x);
	i++; x+=n; /*3*/
	printf("%u *%2u =%4u\t%o *%2o =%4o\t%X *%2X =%4X\n", i,n,x, i,n,x,i,n,x);
	i++; x+=n; /*4*/
	printf("%u *%2u =%4u\t%o *%2o =%4o\t%X *%2X =%4X\n", i,n,x, i,n,x, i,n,x);
	i++; x+=n; /*5*/
	printf("%u *%2u =%4u\t%o *%2o =%4o\t%X *%2X =%4X\n", i,n,x, i,n,x, i,n,x);
	i++; x+=n; /*6*/
	printf("%u *%2u =%4u\t%o *%2o =%4o\t%X *%2X =%4X\n", i,n,x, i,n,x, i,n,x);
	i++; x+=n; /*7*/
	printf("%u *%2u =%4u\t%o *%2o =%4o\t%X *%2X =%4X\n", i,n,x, i,n,x, i,n,x);
	i++; x+=n; /*8*/
	printf("%u *%2u =%4u\t\t\t%X *%2X =%4X\n", i,n,x, i,n,x);
	i++; x+=n; /*9*/
	printf("%u *%2u =%4u\t\t\t%X *%2X =%4X\n", i,n,x, i,n,x);
	i++; x+=n; /*10*/
	printf("\t\t\t\t%X *%2X =%4X\n",i,n,x);
	i++; x+=n; /*11*/
	printf("\t\t\t\t%X *%2X =%4X\n",i,n,x);
	i++; x+=n; /*12*/
	printf("\t\t\t\t%X *%2X =%4X\n",i,n,x);
	i++; x+=n; /*13*/
	printf("\t\t\t\t%X *%2X =%4X\n",i,n,x);
	i++; x+=n; /*14*/
	printf("\t\t\t\t%X *%2X =%4X\n",i,n,x);
	i++; x+=n; /*15*/
	printf("\t\t\t\t%X *%2X =%4X\n",i,n,x);
}




