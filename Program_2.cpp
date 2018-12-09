#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
	const int N = 10;
	int mass[N];
	int k = 0, sum = 0;
	int TempMin = abs(mass[0]);
	for (int r = 0; r < N; r++)
	{
		mass[r] = rand() % 99;
		cout << mass[r] << endl;
	}
	cout << endl;

	for (int r = 1; r < N; r++)
	{
		if (abs(mass[r]) < TempMin)
		{
			TempMin = abs(mass[r]);
			k = r;
		}
	}
	cout << "TempMin = " << k << endl;

	for (int r = 1; r < N; r++)
	{
		if (abs(mass[r]) < 0)
		{
			sum = abs(mass[r]);
		}

	}
	int a, b;
	cin >> a;
	cin >> b;
	int end = mass[N].Length - 1;
	for (int i = 0; i <= end; i++)
		if ((abs(mass[i]) >= a) && (abs(mass[i]) <= b))
		{
			for (int j = i; j < end; j++)
				mass[j] = mass[j + 1];
			mass[end] = 0;
			end--;
			i--;
		}
	system("pause");
	return 0;
}