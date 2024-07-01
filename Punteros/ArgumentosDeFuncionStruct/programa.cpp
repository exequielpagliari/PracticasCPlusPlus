#include <iostream>
#include <string>

using namespace std;

struct miData
{

	char const* nombre_;
	bool esConfederation_;

};


miData naves[]
{
	{"Shuttlecraft", false},
	{"Confed Patrol Ship", true},
	{"Manta", false},
	{"Confed Gunboat" , true},
	{"Defender" , false},
	{"Rebel Cruiser" , false}

};


void ImprimirData(miData *p)
{
	cout << "Esta nave es una " << ( *p).nombre_ << ". ";
	if (p -> esConfederation_)
		cout << "Es una nave confederada." << endl;
	else
		cout << "No es una nave confederada." << endl;
}

int main()
{
	cout << sizeof(miData) << " " << sizeof(miData*) << endl;


	for(auto p = begin(naves); p < end(naves); ++p)
	{
		ImprimirData(p);
	}

	return 0;
}

