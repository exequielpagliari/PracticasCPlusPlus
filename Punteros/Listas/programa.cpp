#include <iostream>
using namespace std;

int main()
{
	int a[7] {1,3,5,4,2,9,-1};
	int *p = nullptr;
	p = &a[2];
	cout << "El valor al que direcciona el puntero p en a es " << *p << "." << endl;
	cout << "El valor al que direcciona el puntero p[3] en a es " << p[3] << "." << endl;

	return 0;
}
