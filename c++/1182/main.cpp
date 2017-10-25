#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int column=0,i,j;
    double m[12][12], sum=0.0;
    char operation;

    cin >> column;
    cin >> operation;

    for(i = 0; i < 12; i++)
    {
        for(j=0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }

    for(i = 0; i < 12; i++)
    {
        sum += m[i][column];
    }
    if(operation == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }else
        cout << fixed << setprecision(1) << sum/12 << endl;
    return 0;
}

