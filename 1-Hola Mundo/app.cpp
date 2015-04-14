//	Hola Mundo

/*
	Definimos las librerias que vamos a utilizar
	iostream nos provee el metodo cout para mostrar datos en la pantalla
	la palabra reservada para incluir librerias es	include	
*/

#include <iostream>

/*
	Se usa esta linea para evitar que se repitan variables,funciones,metodos de este programa
	con los que ya vengan en la libreria, esto agregara un 
		std::
	a los metodos cout,endl,cin y otros metodos reservados de las librerias usadas 
*/
using namespace std;

/*
	Creamos una función, que sera la primera que se ejecute
	la función main() esta recibe algunos parametros que
	se pueden poner opcionalmente, a menos de que los necesites
	para obtener algunos datos que mandaste ala hora de iniciar el programa
*/

int main(int argc, char const *argv[])
{
	/*
		En esta linea se usa la palabra cout para indicar que se va a imprimir un mensaje
		los signos << representan un flujo e indica en este caso que se imprima "Hola mundo"
		y con la palabra endl se de un salto de linea o final de la linea
	*/
	cout << "Hola mundo" << endl;
	/*
		cin.get() nos deja visualizar la pantalla por mas tiempo, ya que si no escribieramos
		esta linea
	*/
	cin.get();
	/*
		como es una función int retorna un valor int o numerico puede regresar cualquier valor
		siempre y cuando sea entero.
	*/
	return 0;
}
