#include <iostream>

using namespace std; 

int main () 
{
	setlocale(LC_ALL, "rus");
	int N, M, i, j , imax = 0  , jmax = 0;
	float A[50][50], last_line_sum = 0 , max = 0;
	cout << "\nВведите количество строк в массиве\n> ";
	cin >> N;
	cout << "\nВведите количество столбцов в массиве\n> ";
	cin >> M;
	
	// ввод матрицы
	cout << "\n\n"; 
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			cout << "A [ " << i << "," << j << "] = ";
			cin >> A[i][j];
		}
	}
	// поиск суммы последней строки матрицы
	i = N - 1; 
	for (j = 0; j < M; j++)
	{
		last_line_sum += A[i][j]; 
	}
	cout << "\n\nlast_line_sum = " << last_line_sum; 
	// замена последнего элемента первой строки на сумму последней строки 
	if (last_line_sum > 0)
	{
		cout << "\n\nЗамена A [ " << 0 << "," << M - 1 << "] = " << A[0][M - 1] << " на " << last_line_sum; 
		A[0][M - 1] = last_line_sum;
		
	}

	// поиск и замена максимального элемента всей матрицы на сумму последней строки
	else 
	{
		max = A[0][0];
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
			{
				if (A[i][j] > max)
				{
					max = A[i][j];
					imax = i;
					jmax = j;
				}

			}
		}
		A[imax][jmax] = last_line_sum; 
		cout << "\n\nmax = " << max;
		cout << "\n\nЗамена A [ " << imax << "," << jmax << "] = " << max << " на " << last_line_sum;
	}


	// вывод конечной матрицы
	cout << "\n\nКонечная матрица : \n"; 
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			cout << "\nA [ " << i << "," << j << "] = " << A [i][j];
		}
	}

	return 0; 
}