#include <iostream>
using namespace std;

/* 1.	Pedir al usuario un n�mero entero y muestre por pantalla si es par o impar */
int main()
{
	/* necesitamos una variable que contenga el n�mero le�do por teclado de tipo entero */
	int num;
	
	/* Pedimos al usuario que lea introduzca un n�mero por teclado. Es un operaci�n de salida y se realiza con cout*/
	cout<<"Introduce un n�mero entero: ";
	
	/*Leemos el numero que es una operaci�n de entrada y se hace con cin */
	cin>>num;
	
	/* Si el numero es divisible entre dos el resto de la divisi�n es cero y es un n�mero par */
	if(num%2==0)
	{
		/* Escribimos por pantalla que el numero es par */
		cout<<"El n�mero es par";
	}
	/* si el numero no es par es impar */
	else
	{
		cout<<"El numero es impar";
	}
	
}
