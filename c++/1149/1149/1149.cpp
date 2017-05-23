// 1149.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, n, soma;
	cin >> a;
	do {
		cin >> n;
	} while (n <= 0);

	soma = 0;
	
	for (int i = 0; i < n; i++)
	{
		soma += (i+a);
	}
	
	cout << soma << endl;

	system("pause");

    return 0;
}