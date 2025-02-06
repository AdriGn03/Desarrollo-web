/* 4.	Ingresar la nota del examen de programación y si es mayor o igual
               a 5 imprimir que aprobó, sino que debe recuperar. */
#include <iostream>
using namespace std;

int main()
{
	// Solo necesitamos una variable, la que almacena el númerro leído. La voy a declarar como float para
	// que la nota pueda ser decimal
	float nota;    //no necesitamos inicializarla, se inicializara cuando se lea su valor
	
	//Pedimos un numero al usuario
	cout<<"Escriba una nota: ";
	
	//Leemos el numero
	cin>>nota;
	
	//Si la nosta es mayor o igual a 5
	if(nota >= 5)
	{
		//notificamos que está aprobado
		cout<<"Enhora buena, esta aprobado"
	};
	//En otro caso esta suspenso
	else
	{
		cout<<"Lo sentimos, esta suspenso: ";
	}
	
	return 0;
}
