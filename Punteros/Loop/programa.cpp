#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a[]{ 10, 20, 30, 40, 50};
	int* p;
	cout << "Ciclo de Loop con el valor mínimo" << 
	" y máximo del Loop explícito" << endl; 
	for(p = &a[0]; p < &a[5]; ++p)
	{

		cout << *p << " ";

	}
	cout << endl;

	cout << "Ciclo de Loop sin valores definido" << endl;
	for (p = a; p < a + sizeof(a)/sizeof(a[0]); ++p)
	{

		cout << *p << " ";
	}
	cout << endl;

	return 0;

}
