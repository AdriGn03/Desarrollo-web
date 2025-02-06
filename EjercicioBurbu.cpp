#include <iostream>
using namespace std;

int main () {
	int array[] = {5, 7, 12, 3, 24, 15, 7, 30, 2, 1};
	//Obtengo el tamaño del array
	int tam = sizeof(array)/sizeof(array[0]);
	
	//for(int i = 0; i < tam - 1; i++) {
	//	for(int j = 0 /*i + 1*/; j < tam; j++) {
	//		if (array[j] /*array[i]*/ > array[j + 1] /*array[j]*/) {
	//			int aux = array[j]; /*array[i]*/
	//			array[j] /*array[i]*/ = array[j + 1]; /*array[j]*/
	//			array[j + 1] = aux; /*array[j]*/
	//		}
	//	}
	//}
	
	for(int i = 0; i < tam - 1; i++) {
		for(int j = i + 1; j < tam; j++) {
			if (array[i] > array[j] ) {
				int aux = array[i];
				array[i] = array[j];
				array[j] = aux;
			}
		}
	}
	
	for (int i = 0; i < tam; i++) {
		cout << array[i] << " ";
	}
}
