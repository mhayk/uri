#include <iostream>

using namespace std;


int main()
{
    int t,array[1000],i=0,j;
    cin >> t;
    while(i < 1000)
    {
        for(j=0; j < t; j++)
        {
            array[i] = j;
            i++;
        }
    }

    for(i=0; i < 1000; i++)
    {
        cout << "N[" << i << "] = " << array[i] << endl;
    }
    return 0;
}

