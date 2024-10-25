#include <iostream>

// Zad 3
int main(void){
	int number;
	std::cout << "Podaj liczbę: \n";
	std::cin >> number;
	std::cout << "Liczba " << number;
	if (number == 0)
	{
		std::cout << " jest żadna (0).\n";	
	}
	else
	{
		if(number%2 == 0)
			std::cout << " jest parzysta.\n";
		else
			std::cout << " jest nieparzysta.\n";
	}
	return 0;
}
