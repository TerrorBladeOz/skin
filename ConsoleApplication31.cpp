#include "stdlib.h"
#include "time.h"
#include "iostream"
#include "ctime"

using namespace std;

int main()
{
	srand(time(NULL));
	const int n = 3;
	const int n1 = 3;
	const int m = 3;
	int numbers1[n][n1];
	int numbers2[m];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			numbers1[i][j] = rand() % 100;
		}
	}

	cout << "Массив: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << numbers1[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			numbers2[i] = numbers1[2][i];
		}
	}
	// проверка элементов numbers2
	cout << " numbers2 = { ";
	for (int i = 0; i < m; i++)
	{
		cout <<numbers2[i]<< " ";
	}
	cout << "}";
	return 0;
}