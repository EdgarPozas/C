///		Arreglos
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	//Definimos un arreglo de tamaño 10
	int arreglo[10];
	//llenamos el arreglo con un ciclo for
	for (int i = 0; i <=10;i++)
	{
		//el arreglo en la posicion que vaya del ciclo
		//va a ser igual al numero del ciclo
		arreglo[i]=i;
	}
	//en otro ciclo for vamos a mostrar lo que contenga el arreglo
	for (int i = 0; i <=10; ++i)
	{
		cout<<arreglo[i]<<endl;
	}
	cin.get();
	return 0;
}
