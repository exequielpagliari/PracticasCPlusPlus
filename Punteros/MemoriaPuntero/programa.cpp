//Ejemplo de creación y lectura de Puntero y los espacios de memoria
//de cada uno de ellos.

#include <iostream>
#include <string>

using namespace std;

int main()
{

	int i = 1234;
	int *p = &i;
	cout << "Variable int i tiene el valor de " << i << endl;
	cout << "El valor de Puntero p direccionado a i tiene el valor de " << *p << endl;
	cout << "El espacio de memoria de i es " << &i << endl;
	cout << "El espacio de memoria direccionado de p es " << p << endl;
	
	cout << "Se suma valor de 2 al puntero p" << endl;
	*p = *p + 2;
	cout << "El valor al cual está direccionado p es de " << *p << endl;

	return 0;
}
