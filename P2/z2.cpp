#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

const char C = '*';

int a, b;
string row = "";

void br(){
	cout << "\n\n\n";
}

void printRow(){
	cout << row << "\n";
}

void printCol(){
	for (int i = 0; i < b; i++)
		cout << C << "\n";
}

void printRect(){
	for (int i = 0; i < b; i++)
		cout << row << "\n";	
}

void printRectBorder(){
	printRow();
	int n = b - 1;
	for(int i = 1; i < n; i++){
		cout << C;
		for(int j = 1; j <= n; j++){
			cout << ' ';
		}
		cout << C << "\n";
	}
	printRow();
}

 enum t {
	TR = (0, 0),
	TL = (0, 1),
	BR = (1, 0),
	BL = (1, 1)
};

void printTri(){
	
}

void printDiamond(){
	
}

int main()
{
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	row.append(a, C);

	printRow();
	br();
	printCol();
	br();
	printRect();
	br();
	printRectBorder();
	br();
	
	return 0;
}
