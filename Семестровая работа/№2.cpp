#include <iostream>
#include <math.h>

using namespace std; 

int main () 
{
	setlocale(LC_ALL, "rus");
	float a, b, c, d = 0;
	cout << "Введите a\n> ";
	cin >> a; 
	cout << "\nВведите b\n> ";
	cin >> b;
	cout << "\nВведите c\n> ";
	cin >> c;
	d = (a + b + c) / 3; 
	cout << "\nd = " << d <<"\n";
	if (d < 100) cout << "\n d > 100 ";
	else if (d == 100) cout << "a = " << a << "b = " << b << "c = " << c;
	else if (d > 100)
	{
		float y = 0, x ;
		int counter = 0;
		for (x = -4; x <= 4; x += 0.2)
		{
			y = 10 * pow(2.71, -a) * sqrt(x + 1) * sin(3.14 * x);
			if (y > 0)
			{
				cout << "\n y = " << y;
				counter++;
			}
		}
		if (counter == 0) cout << "\nПоложительных значений y нет\n";
	}
	return 0; 
}