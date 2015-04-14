///		Librerias
//importamos la libreria creada
#include "./libreria.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
	//usamos la variable creada en el otro modulo
	cout <<saludo<<endl;
	//podemos tambien llamar ala función creada en el otro modulo
	//solo le pasamos las variables
	cout<< sumar(6.4,1.1)<<endl;
	cin.get();
	return 0;
}
