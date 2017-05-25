#include <iostream>

using namespace std;

int main(void)
{
	int x, z, count, j;
	cin >> x;
	do {
		cin >> z;
	} while (z <= x);
	
	count = 1;
	j = x;
	for (int i = x; i < z; i++)
	{
		count++;
		j += i;
		if (j > z)
			break;
	}
	cout << count << endl;
	//system("pause");
	return 0;
}