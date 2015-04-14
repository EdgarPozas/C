///		If
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	/*
		cuando queremos evaluar si una variable o si ciertos datos
		cumplen determinadas cualidades usamos las estructuras de control en este caso usamos el
			if
		este concicional evalua si una condición es verdadera para ello usamos operadores logicos
		como 
		&&	,	||	,	!=	,	==	,	<=	,	>=
	*/
	bool verdad=true,falso=false;
	/*
		si verdad es igual a true imprime verdadero
		sino imprime falso
	*/
	//	== Si es igual
	if(verdad==true){
		cout << "Es verdadero" << endl;
	}
	else{
		cout << "Es falso" << endl;
	}

	/*
		Varios if con codicionales
	*/
	//	&&	se deben cumplir ambas condiciones
	if(verdad==true && verdad !=false){
		cout << "Es verdadero" << endl;
	}
	//	||	se debe cumplir solo una condicion
	if(verdad==true || falso==false){
		cout << "Operador ||" << endl;
	}
	//	!=	diferente
	if(verdad!=false){
		cout << "Es verdadero" << endl;
	}
	int i=3
	//	<= menor igual
	if (i<=10)
	{
		cout << "Es menor o igual" << endl;	
	}
	//	>= mayor igual
	if (i>=2)
	{
		cout << "Es mayor o igual" << endl;	
	}

	//	Varios if
	if(verdad==true){
		cout << "Es verdad" << endl;	
	}
	else if(verdad==false){
		cout << "Es falso" << endl;	
	}
	cin.get();
	return 0;
}
