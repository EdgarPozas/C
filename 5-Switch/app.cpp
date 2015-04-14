///		Switch
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int comparar=2;
	/*
		si queremos comparar una variable varias veces
		usamos la estructura switch
		esto compara solo caracteres o numeros enteros
		si ninguno se cumple se usa el default
	*/
	switch(comparar){
		case 1:
			cout<<"caso 1"<<endl;
			break;
		case 2:
			cout<<"caso 2"<<endl;
			break;
		default:
			cout<<"default"<<endl;
			break;
	}
	cin.get();
	return 0;
}
