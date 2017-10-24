#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i,j=19;
    double array[20],aux;
    for(i=0; i < 20; i++)
    {
        cin >> array[i];
    }
    for(i=0; i < 10; i++)
    {
        aux = array[i];
        array[i] = array[j];
        array[j] = aux;
        j--;
    }
    for(i=0; i < 20; i++)
        cout << "N[" << i << "] = " << array[i] << endl;

    return 0;
}

