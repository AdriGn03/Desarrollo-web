#include <iostream>
using namespace std;

/* 3.	Leer 2 números diferentes y nos diga cuál es el mayor de los 2 números */
int main()
{
	//necesitamos declarar dos variables, una para cada numero leido
	
	int num1,num2;
	
	//Solicitamos al usuario que escriba un numero
	cout<<"Escribe un numero: ";
	
	//Leemos el numero
	cin>>num1;
	
	//Solicitamos al usuario que lea otro numero
	cout<<"Escribe otro numero: ";
	
	//Leemos el numero
	cin>>num2;
	
	//Si num1 es mayor que num2
	if(num1 > num2)
	{
		//Escribimos que el mayor es num1
		cout<<" el mayor es: "<<num1;
	}
	else
	{
		//si num1 no es el mayor es porque el menor es num2 es el mayor o los dos son iguales, y mostramos num2
		cout<<"El mayor es: "<<num2;
	}
	
	//Hacemos un salto de linea
	cout<<endl;
	
	//Despedimos al usuatio
	cout<<"Hasta pronto";
	
	//Saltamos de linea antes de terminar
	cout<<endl;
	
	return 1;
	
}
