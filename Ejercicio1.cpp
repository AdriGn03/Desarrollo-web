#include <iostream>
using namespace std;

/* 1.	Pedir al usuario un número entero y muestre por pantalla si es par o impar */
int main()
{
	/* necesitamos una variable que contenga el número leído por teclado de tipo entero */
	int num;
	
	/* Pedimos al usuario que lea introduzca un número por teclado. Es un operación de salida y se realiza con cout*/
	cout<<"Introduce un número entero: ";
	
	/*Leemos el numero que es una operación de entrada y se hace con cin */
	cin>>num;
	
	/* Si el numero es divisible entre dos el resto de la división es cero y es un número par */
	if(num%2==0)
	{
		/* Escribimos por pantalla que el numero es par */
		cout<<"El número es par";
	}
	/* si el numero no es par es impar */
	else
	{
		cout<<"El numero es impar";
	}
	
}
