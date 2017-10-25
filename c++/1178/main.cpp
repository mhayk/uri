#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x,array[100];
    int i=0;
    cin >> x;

    array[0] = x;
    for(i=1; i < 100; i++)
        array[i] = array[(i-1)] / 2;

    for(i=0; i < 100; i++)
        cout << "N[" << i << "] = " << fixed << setprecision(4) << array[i] << endl;

    return 0;
}

