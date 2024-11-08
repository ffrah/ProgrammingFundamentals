#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void szereg(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	cout << "Suma szeregu " << n << " = " << sum << endl;
}
int main()
{
	szereg(1);
	szereg(2);
	szereg(3);
	szereg(4);
	szereg(5);
	return 0;
}
