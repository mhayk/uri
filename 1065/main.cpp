#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e, total;
    cin >> a >> b >> c >> d >> e;

    total = 0;

    if ( !(a % 2) )
        total++;
    if ( !(b % 2) )
        total++;
    if (!(c % 2))
        total++;
    if (!(d % 2))
        total++;
    if (!(e % 2))
        total++;

    cout << total << " valores pares" << endl;
    return 0;
}
