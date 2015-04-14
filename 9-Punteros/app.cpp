///		Punteros
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	/*
		Los punteros son espacios de memoria
		en los cuales se pueden almacenar variables o datos
		estos son usados para crear listas, estructuras de datos etc.		
	*/
	//creamos una variable que va a ser la que se contenga en el puntero
	int contenido=12;
	//Definir un puntero
	//tipo *nombre;
	int *puntero;
	//para darle un valor se lo pasamos sin el *
	//para darle el valor se lo pasamos por referencia &
	//puntero=&contenido;
	puntero=&contenido;

	//imprimimos el valor que tenga el puntero
	cout<<"Valor guardado en el puntero : "<<*puntero<<endl;
	//imprimimos la direccion de el puntero
	cout<<"Valor de la direccion : "<<puntero;
	cin.get();
	return 0;
}
