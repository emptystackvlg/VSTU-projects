#include <iostream>

using namespace std; 

int main () 
{
	setlocale(LC_ALL, "rus");
	float M[60] , sum = 0 ;
	int N , i; 
	cout << "Введите количество элементов в массиве M\n> ";
	cin >> N;
	// ввод массива M
	for (i = 0; i < N; i++)
	{
		cout << "M [ " << i << "] = ";
		cin >> M[i]; 
	}
	// вычисление суммы положительных элементов
	for (i = 0; i < N; i++)
	{
		if (M[i] > 0) sum += M[i]; 
	}
	cout << "\nsum = " << sum; 
	// замена элементов массива 
	for (i = 0; i < N; i++)
	{
		if (M[i] < 0) M[i] = sum; 
	}
	// вывод конечного масссива на экран
	cout << "\n\nКонечный массив : "; 
	for (i = 0; i < N; i++)
	{
		cout << "\nM [ " << i << "] = " << M[i]; 
	}
	return 0; 
}