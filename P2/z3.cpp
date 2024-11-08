#include <iostream>

char C = '*';

int a = 2;
int b = 2;

void printNewline(void)
{
	std::cout << "\n";
}

void printChar(void){
	std::cout << C;
	printNewline();
}

void printRow(void){
	for(int i = 0; i < a; i++){
		std::cout << C;
	}
	printNewline();
}

void printColumn(void){
	for(int i = 0; i < a; i++){
		std::cout << C << "\n";
	}
	printNewline();
}

void printSliceRow(int start=0, int end=0, char sign1 = ' ', char sign2 = C){
	for(int i = 0; i < start; i++){
		std::cout << sign1;
	}

	for(int i = 0; i < a - (start + end); i++){
		std::cout << sign2;
	}
	
	for(int i = 0; i < end; i++){
		std::cout << sign1;
	}
	printNewline();
}

void printRect(void){
	for(int i = 0; i < b; i++){
		printRow();
	}
	printNewline();
}

void printRectBorder(void){
	printRow();
	for(int i = 0; i < b - 2; i++){
		printSliceRow(1, 1, C, ' ');
	}
	printRow();
	printNewline();
}

void printTriangleLT(void){
	for(int i = 0; i < a; i++){
		printSliceRow(0, i);
	}
	printNewline();
}

void printTriangleRT(void/*short right_x=1, short right_y=1*/){
	for(int i = 0; i < a; i++){
		printSliceRow(i, 0);
	}
	printNewline();
}

void printTriangleLB(void){
	for(int i = a; i > 0; i--){
		printSliceRow(0, i-1);
	}
	printNewline();
}

void printTriangleRB(void){
	for(int i = a; i > 0; i--){
		printSliceRow(i-1, 0);
	}
	printNewline();
}

void printDiamond(void){
	/*
		1: 0
		2: 0 0
		3: 1 0 1
		4: 1 0 0 1
		5: 2 1 0 1 2
		6: 2 1 0 0 1 2
		7: 3 2 1 0 1 2 3
		8: 3 2 1 0 0 1 2 3
	*/
	for(int j = (a-1)/2; j > 0; j--){
		printSliceRow(j, j);
	}
	for(int j = a%2; j < 2 ; j++){
		printRow();
	}
	for(int j = 0; j < (a-1)/2 ; j++){
		printSliceRow(j+1, j+1);
	}
	printNewline();
}

int main (void){
	std::cout << "Enter a: " << std::endl;
	std::cin >> a;
	std::cout << "Enter b: " << std::endl;
	std::cin >> b;
	printNewline();

	std::cout << "Char: \n\n";
	printChar();
	printNewline();

	std::cout << "Row: \n\n";
	printRow();
	printNewline();

	std::cout << "Column: \n\n";
	printColumn();
	printNewline();

	std::cout << "Rect: \n\n";
	printRect();
	printNewline();

	std::cout << "Border: \n\n";
	printRectBorder();
	printNewline();

	std::cout << "Triangle (Left-Bottom): \n\n";
	printTriangleLB();
	printNewline();

	std::cout << "Triangle: (Right-Top): \n\n";
	printTriangleRT();
	printNewline();

	std::cout << "Triangle (Left-Top): \n\n";
	printTriangleLT();
	printNewline();

	std::cout << "Triangle: (Right-Bottom): \n\n";
	printTriangleRB();
	printNewline();

	std::cout << "Diamond: \n\n";
	printDiamond();
	printNewline();
	
	return 0;
}
