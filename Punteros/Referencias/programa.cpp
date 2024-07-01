#include <iostream>
#include <string>

using namespace std;

int main()
{

	int i = 10;
	int& ir = i;

	i = i +10;
	ir = ir *10;

	cout << "la variable int i  se inicializa con un valor "
	<< "de 10 y una referencia int ir se direcciona a esa "
	<< "variable. Luego se suma 10 a i y se multiplica por "
	<< "10 a la referencia ir. El valor de la variable i "
	<< "ahora es de " << i << "." << endl;

	int *ip = &ir;
	*ip = 33;
	cout << "Se creó un puntero ip que referencia a la referencia"
	<< "ir y se modificó su valor por 33. Ahora ir vale " << ir <<
	" e *ip vale " << *ip << "." << endl;
	return 0;
}
