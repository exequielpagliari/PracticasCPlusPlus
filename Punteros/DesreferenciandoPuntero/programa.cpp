// Este programa expone la desreferencia de un puntero y el error ocurrido
//por ello.

#include <iostream>
using namespace std;

int main()
{

	int *p1 = nullptr;
	cout << "p1 = " << p1 << endl;
	*p1 = 52;

	return 0;
}
