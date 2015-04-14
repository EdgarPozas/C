///		Clases

//las clases se implementan en la programacion orientada a objetos
//donde una clase es el objeto padre y este puede tener varios metodos
#include <iostream>
//otra manera de definir una variable global estatica
//es con la palabra define seguido de el nombre y el valor que va a tener
#define EDAD 15

using namespace std;
//creamos una clase humano
class Humano
{
	//la clase humano tiene 3 metodos basicos
	//saluda
	//decimos que es publica y es una funcion void o un metodo seguido de el nombre saluda
	//dentro de las llaves va lo que se quiera realizar en esa función
	/*
		public:void nombre(parametros){
			--acciones que va a realizar--
		}
		public:int funcion regresa valor integer o numerico
		public:char regresa valor char 
		public:void ejecuta metodos o acciones
	*/
	public:void saluda(){
		cout<<"Hola que tal tu dia?"<<endl; 
	}
	//adios
	public:void adios(){
		cout<<"Adios hasta pronto"<<endl;
	}
	//preguntar edad
	public:void preguntaredad(){
		cout<<"Mi edad es de : "<<EDAD<<endl;
	}
};

int main(int argc, char const *argv[])
{	
	//Al tener ya nuestra clase creada la instanciamos
	//NombreClase variable;
	//ya con la variable podemos acceder a los metodos publicos
	//que se encuentren disponibles en la clase
	Humano h;
	//metodo saluda
	h.saluda();
	//metodo preguntar edad
	h.preguntaredad();
	//metodo adios
	h.adios();
	cin.get();
	return 0;
}
