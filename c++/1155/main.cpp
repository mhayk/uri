#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double total=0,i;

    for(i=1; i<=100; i++)
    {
        //cout << 1/i;
        total += 1/i;
    }

    cout << fixed << setprecision(2) << total << endl;
    return 0;
}

