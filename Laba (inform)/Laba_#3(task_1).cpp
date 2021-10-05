#include <iostream>
using namespace std; 

int main()
{
	setlocale(LC_ALL, "rus");
	float x, n , k , full_product;

	cout << "\n Введите число x\n> "; 
	cin >> x; 
	cout << "\nВведите число k \n> ";
	cin >> k; 
	n = 1;
	full_product = 1;

	for (n; n <= k; n++) 
	{
		full_product *= ((n / 2) + x); 
		cout << "\nПри n = " << n << "\t P = " << full_product; 	
	}
	cout << "\n";

	system("pause"); 
	return 0; 
}
