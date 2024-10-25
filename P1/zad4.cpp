#include <iostream>

int givenNumber, highestNumber;

void readNumber(int i){
	std::cout << "Podaj liczbę nr " << i <<": \n";
	std::cin >> givenNumber;	
}

// Zad 4
int main(void){
	readNumber(1);
	highestNumber = givenNumber;
	
	for(int i = 2; i <= 3; i++){
		readNumber(i);
		if (highestNumber < givenNumber)
			highestNumber = givenNumber;	
	}
	
	std::cout << "Największą liczbą jest liczba " << highestNumber << std::endl;
	return 0;
}
