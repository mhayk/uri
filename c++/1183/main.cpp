#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i,j;
    double m[12][12], sum=0.0;
    char operation;

    cin >> operation;

    for(i = 0; i < 12; i++)
    {
        for(j=0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }

    for(i = 1; i < 12; i++)
    {
        for(j=i; j < 12; j++)
        sum += m[i][j];
    }
    if(operation == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }else
        cout << fixed << setprecision(1) << sum/12 << endl;
    return 0;
}

