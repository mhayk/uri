#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i;
    double array[100];
    for(i=0; i < 100; i++)
    {
        cin >> array[i];
    }
    for(i=0; i < 100; i++)
    {
        if(array[i] <= 10)
            cout << "A[" << i << "] = " << fixed << setprecision(1) << array[i] << endl;
    }
    return 0;
}

