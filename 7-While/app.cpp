//	ciclo while
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	/*
		si queremos realizar instrucciones por repetidas veces
		usamos ciclos
		usaremos el while y do-while
		que se cumplira mientras se cumpla una condicion
	*/
	int i=0;
	//while se evalua y si cumplese ejecuta
	while(i<=10){
		cout << "dentro de while" << endl;
		i++;
	}
	cout<<"--------------------------"<<endl;
	//do while se ejecuta y alfinal evalua
	do{
		cout << "dentro de do-while" << endl;
		i++;
	}while(i<=20);

	cin.get();
	return 0;
}
