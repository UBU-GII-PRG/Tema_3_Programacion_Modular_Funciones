/*
Programa:	referencia.c
Sinopsis:	Ejemplo de  uso de funciones con parámetros por referencia
		y por valor
		Es el mecanismo para poder devolver más de un valor desde una
		función
Descripción:	Debemos ser muy cuidadosos en el uso de los operadores 
		de dirección (&) e indirección (*)
		
		Como "pista", los parámetros formales y las variables puntero
		o apuntador emplean el parámtro indirección. 

		Emplearemos el operador dirección (&) en la llamada a la función		a la hora de proporcionar parámetros actuales que vayan a ser 
		modificados por la propia función

Autor:		Paco González Moya
Versión:	1.0
Fecha:		Marzo de 2018	
*/

#include <stdio.h>

/** Ofrece el salario y las dietas incrementadas de acuerdo al ipc suminsitrado
@param	int *salario 	E/S (por referencia) importe salario que se modificará
	int *dietas	E/S (por referencia) importe de las dietas que se  incrementarán
 	int ipc		E/ (por valor) porcentaje de ipc de incremento aplicable
@return -1 si se ha actualizado, 0 en caso cntrario	*/	
int incrementoSalario (int *salario, int *dietas, int ipc) ;


int main() {
	//Declaración de variables
	int salario_mio=0;		//Importe del salario
	int dietas_mias=0;	 	//Importe de las dietas
	int ipc_actual; 		//Porcentaje del ipc
	int ok=0;			//Indicador de cálculos correctos

	//Mostramos info de variables al inicio
	printf("\nLista de variables al inicio de todo");
	printf("\n------------------------------------");
	printf("\n Salario: %i alojado en : %p", salario_mio, &salario_mio);
	printf("\n Dietas : %i alojado en : %p", dietas_mias, &dietas_mias);
	printf("\n IPC    : %i alojado en : %p\n", ipc_actual, &ipc_actual);


	/*Entrada de datos */
	printf("\n\nIntroduzca el valor del salario: ");
	scanf("%i", &salario_mio);
	printf("Introduzca el valor de las dietas: ");
	scanf("%i", &dietas_mias);
	printf("Introduzca el IPC [0..100]: ");
	scanf("%i", &ipc_actual);

	/*Mostramos los datos tal y como se teclearon*/
	printf("\nDatos para cálculos: salario->%i dietas->%i ipc->%i", salario_mio, dietas_mias, ipc_actual);

	//Realizamos los cálculos
	ok=incrementoSalario(&salario_mio, &dietas_mias, ipc_actual);
	
	//Mostramos resultados
	printf("\n\nResultados: salario->%i dietas->%i ipc->%d ok->%i", salario_mio, dietas_mias, ipc_actual, ok);

	//Mostramos info de variables al final
	printf("\n\nLista de variables al final");
	printf("\n---------------------------");
	printf("\n Salario: %i alojado en : %p", salario_mio, &salario_mio);
	printf("\n Dietas : %i alojado en : %p", dietas_mias, &dietas_mias);
	printf("\n IPC    : %i alojado en : %p\n", ipc_actual, &ipc_actual);


	return 0;

}
int incrementoSalario (int *salario, int *dietas, int ipc) {
	//Cálculo de incremento del salario y de las dietas

	//Antes, un vistazo a las "variables"
	//Mostramos info de variables 
	printf("\n\nLista de variables dentro de la funcion:");
	printf("\n---------------------------------------");
	printf("\n Salario: %i alojado en : %p", *salario, salario);
	printf("\n Dietas : %i alojado en : %p", *dietas, dietas);
	printf("\n IPC    : %i alojado en : %p\n", ipc, &ipc);

	
	//Este cálculo es muy mejorable
	*salario = *salario+*salario*ipc/100; //Cuidado con precedencia y asociatividad 
	*dietas = *dietas+*dietas*ipc/100;

	//Un error, pero sin consecuencias...
	ipc++;
	//Mostramos info de variables 
	printf("\n\nLista de variables dentro de la funcion (después de calcular):");
	printf("\n----------------------------------------------------------");
	printf("\n Salario: %i alojado en : %p", *salario, salario);
	printf("\n Dietas : %i alojado en : %p", *dietas, dietas);
	printf("\n IPC    : %i alojado en : %p\n", ipc, &ipc);



	return -1;

}


