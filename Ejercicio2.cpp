#include <iostream>
using namespace std;

/* 2.	Sumar dos n�meros le�dos por teclado y escribir el resultado. */
int main()
{
	/* Necesitamos dos variables una que almacene el primer n�mero y otra que almacene el segundo, Puede ser de tipo entero o real */
	float num1,num2;
	
	//Pedimos al usuario que introduzca el primer numero 
	cout<<"Entroduce un numero: ";
	// Leemos el primer numero 
	cin>>num1;
	
	//Pedimos al usuario que introduzca el segundo numero 
	cout<<"Introduce otro numero: ";
	// Leemos el segundo numero 
	cin>>num2;
	
	//mostramos el serultado de la suma
	cout<<"La suma de los dos numeros es: "<<num1+num2;
	
	return 0;
	
}
