#include <iostream>
using namespace std;

#define n 3

int min(int **A) // поиск минимального элемента
{
	int m = A[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (A[i][j] < m)
				m = A[i][j];
		}
	return(m);
}

int sum(int **A) // сумма положительных элементов
{
	int s = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (A[i][j] > 0)
				s = s + A[i][j];
		}
	return(s);
}

void mul(int x, int **A) // умножение числа на матрицу
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			A[i][j] *= x;
		}
}

void transpose(int **A) // транспозиция матрицы
{
	int t;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			t = A[i][j];
			A[i][j] = A[j][i];
			A[j][i] = t;
		}
	}
}

bool is_prime(int x) // является ли число простым
{
	bool isPrimeNumber = true;
	if (x == 0 || x == 1)
	{
		isPrimeNumber = false;
	}
	else
	{
		for (int i = 2; i <= x / 2; ++i)
		{
			if (x % i == 0)
			{
				isPrimeNumber = false;
				break;
			}
		}
	}
	return isPrimeNumber;
}

int count_prime(int** A) // количество простых чисел, расположенных на диагоналях
{
	int s = 0;
	for (int i = 0; i < n; ++i)
	{
		if (is_prime(A[i][i]))
		{
			s += 1;
		}
		if (is_prime(A[i][n-i-1]))
		{
			s += 1;
		}
	}
	return(s);
}

int main()
{
	cout << "Matrix A:" << endl; // вводим матрицу A
	int** A;
	A = new int* [n];
	for (int i = 0; i < n; i++)
		A[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> A[i][j];

	cout << "Matrix C:" << endl; // вводим матрицу C
	int** C;
	C = new int* [n];
	for (int i = 0; i < n; i++)
		C[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> C[i][j];

	mul(2, A);
	transpose(C);
	int** B;
	B = new int* [n];
	for (int i = 0; i < n; i++)
		B[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			B[i][j] = A[i][j] + C[i][j];
	cout << "result B:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}