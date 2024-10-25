#include <iostream>

// Zad 2
int main(void){
	int number;
	std::cout << "Podaj liczbę: \n";
	std::cin >> number;
	std::cout << "Liczba " << number;
	if (number == 0)
	{
		std::cout << " jest równa 0.\n";	
	}
	else if (number > 0)
	{
		std::cout << " jest dodatnia.\n";
	}
	else
	{
		std::cout << " jest ujemna.\n";
	}
	return 0;
}
