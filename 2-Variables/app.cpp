//	Variables

#include <iostream>

using namespace std;

/*
	Una variable es un espacio en donde podemos guardar información.
	Para definir una variable primero especificamos el tipo de variable y luego el nombre
	puede ser cualquier nombre siempre y cuando no contenga espacios.
	ejemplos:
		tipo entero numero sin decimales
	int entero;
		tipo flotante numero con decimales
	float flotante;
		tipo caracter guarda un caracter o una letra
	char caracter;
		tipo arreglo guarda una sucecion de caracteres como cadenas de texto
	char caracteres[];
		tipo puntero guarda una direccion de memoria
	int *puntero;
		tipo boolean guardan true o false
	boolan verdad;

	////	Definir varias variables de un tipo

	int entero,entero2,*puntero;
	float flotante;
	char caracter,caracteres[];

	////	Darles un valor inicial a las variables
	int entero=10,entero2=2,*puntero=&entero;
	float flotante=3.123123;
	char caracter='c',caracteres[]="Hola";
	bool verdad=true;
*/

/*
	Si definimos variables en esta parte antes de el metodo main()
	las variables creadas aqui van a ser globales y por lo tanto
	se podran usar en cualquier parte de el programa
*/
int enteroglobal=10;
float flotanteglobal=3.1425334;
char caracterglobal='c';
bool verdad=true;

int main(int argc, char const *argv[])
{
	/*
		si definimos en esta parte las variables van a sr locales y solo se podran utilizar
		en el metodo main()
	*/
	int enterolocal=30;
	int *punterolocal=&enteroglobal;
	char cadenalocal[]="Cadena local";

	cout << "Este es el numero enteroglobal : "<< enteroglobal << endl;
	cout << "Este es el numero flotanteglobal : "<< flotanteglobal << endl;
	cout << "Este es el numero caracterglobal : "<< caracterglobal << endl;
	cout << "Este es el numero enterolocal : "<< enterolocal << endl;
	cout << "Este es el numero punterolocal : "<< punterolocal << endl;
	cout << "Este es el numero cadenalocal : "<< cadenalocal << endl;
	cout << "Este es el valor de verdad : "<< verdad << endl;
	cin.get();
	return 0;
}
