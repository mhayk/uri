#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i,j,aux;
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
    aux = 11;
    for(i = 0; i < 11; i++)
    {
        for(j = 0; j < aux; j++)
        {
            sum += m[i][j];
        }
        aux--;
    }
    if(operation == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }else
        cout << fixed << setprecision(1) << sum/66 << endl;
    return 0;
}

