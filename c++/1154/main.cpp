#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double total=0;
    int i=0,num;
    do
    {
        cin >> num;
        if(num > 0)
        {
            total += num;
            i++;
        }

    }while(num > 0);
    cout << fixed << setprecision(2) << total/i << endl;
    return 0;
}

