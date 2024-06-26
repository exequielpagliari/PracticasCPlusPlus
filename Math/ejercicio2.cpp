#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>
unsigned int valor1;
unsigned int valor2;

unsigned int micodiv(unsigned int a, unsigned int b)
{

 return b == 0 ? a :std:: __gcd(a,b);

}



int main()
{
 std::cout << "Ingrese Primer Valor  ";
 std::cin >> valor1;
 std::cout << "\n" << "Ingrese Segundo Valor  ";
 std::cin >> valor2;

 std::cout << "\n" << "El Máximo Común Divisor es "  << micodiv(valor1,valor2) << "\n";
 return 0;
}
