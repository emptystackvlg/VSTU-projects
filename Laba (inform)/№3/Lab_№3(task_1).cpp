
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x, n, k,prod;   //prod - произведение

	cout << "\n Введите число x\n> ";
	cin >> x;
	cout << "\nВведите число k \n> ";
	cin >> k;
	prod = 1;

	for (n = 1; n <= k; n++)
	{
		prod *= ((n / 2) + x);
		cout << "\nПри n = " << n << "\t P = " << prod << "\n";
	}
	cout << "\n" ; 
	system("pause");
	return 0;
}
