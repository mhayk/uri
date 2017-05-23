// 1146.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

int main()
{
	int x;
	
	do {
		cin >> x;
		for (int i = 1; i <= x; i++)
		{
			if (i != x)
				cout << i << " ";
			else
				cout << i << endl;
		}
			
	} while (x != 0);

    return 0;
}

