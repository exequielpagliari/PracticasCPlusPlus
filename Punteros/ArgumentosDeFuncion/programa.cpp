#include <iostream>
#include <string>

using namespace std;



void CopyChars(char* from, char* to, int count)
{

	if(from == nullptr || to == nullptr)
	{

		return;

	}

	while(count-- > 0)
	{

		*to++ = *from++;

	}

}

int main()
{

	char string[] { "uvwxyz" };
	char buffer[10];
	CopyChars (string, buffer, 7);
	cout << buffer << endl;

	return 0;
}
