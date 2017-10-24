#include <iostream>

using namespace std;

int main()
{
    int N[10],i,num;
    cin >> num;
    N[0] = num;
    for(i=1; i < 10; i++)
    {
        num *= 2;
        N[i] = num;
    }
    for(i=0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << N[i] << endl;
    }
    return 0;
}

