//1. Sum of naturals divisible by 3 and 5
//Write a program that calculates and prints the sum of all the natural numbers divisible by
//either 3 or 5, up to a given limit entered by the user.


#include <iostream>
#include <string>

unsigned int valor;

int main()
{
 
 std::cout << "Ingrese cantidad de números a evaluar .\n";
 std::cin >> valor;

 
 for (unsigned int i = 2; i -1 < valor; i++)
 {
 
 if(i % 3 == 0 || i % 5 == 0)
  {
    std::cout << i << " ";
  } 
  
 }
 std::cout << "\n";
 return 0;
}
