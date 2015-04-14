///		Operaciones Basicas
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int numero1=10,numero2=5;
	float resultado;
	/*
		suma
	*/
	resultado = numero1 + numero2;
	cout << "Resultado de la suma : "<<resultado<<endl;
	/*
		resta
	*/
	resultado = numero1 - numero2;
	cout << "Resultado de la resta : "<<resultado<<endl;
	/*
		multiplicación
	*/
	resultado = numero1 * numero2;
	cout << "Resultado de la multiplicacion : "<<resultado<<endl;
	/*
		divición
	*/
	resultado = numero1 / numero2;
	cout << "Resultado de la divicion : "<<resultado<<endl;
	cin.get();
	return 0;
}
