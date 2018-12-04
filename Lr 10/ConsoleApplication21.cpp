#include "pch.h"
#include <iostream>
using namespace std;
void arr_ini(int Arr[], const int size);
void arr_print(int Arr[], const int size);
int main()
{
	const int N = 4;
	int Arr[N];
	int Barr[N];
	int C[N];
	cout << "array A:" << endl;
	arr_ini(Arr, N);
	cout << "array B:" << endl;
	arr_ini(Barr, N);
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] > Barr[i])
		{
			C[i] = Arr[i];
		}
		if (Arr[i] < Barr[i])
		{
			C[i] = Barr[i];
		}
	}
	cout <<"MIn Element"<<endl;
	cout << "MAX ELEMENT" << endl;
	arr_print(C, N);
}
void arr_ini(int Arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> Arr[i];
	}
}
void arr_print(int Arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << Arr[i] << endl;
	}
}
