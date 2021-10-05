#include <iostream>
#include <math.h>
using namespace std; 

int main()
{
	setlocale(LC_ALL, "rus");
	float func, A, x ,expression;
	cout << "\nВведите число A\n> ";
	cin >> A;  

	for (x = -2; x <= 3; x += 0.5) 
	{
		expression = x*x*x - 2*x*x - x + 2;
		if (expression == 0) {
			func = A * 1;
			cout << "\nПри x = " << x << "\tf(x) = " << func << "\t\n";
		}
		else if (1 >= expression >= -1) {
			func = A * (sin(expression) / expression);
			cout << "\nПри x = " << x << "\tf(x) = " << func << "\t\n";
		}
		else cout << "Ошибка";
		
	}
	return 0;
}
