#include <iostream>

using namespace std;

int main()
{
    int num,i,j;

    cin >> num;

    if( (num % 2) == 0 )
    {
        j=1;
        num++;
        while(j <= 6)
        {
            cout << num << endl;
            num+=2;
            j++;
        }
    }
    else
    {
        j=1;
        while(j <= 6)
        {
            cout << num << endl;
            num+=2;
            j++;
        }
    }

    return 0;
}
