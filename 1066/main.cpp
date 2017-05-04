#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e, total, totalimpar,totalpos, totalneg;
    cin >> a >> b >> c >> d >> e;

    total = totalimpar = totalpos = totalneg = 0;

    if ( !(a % 2) )
    {
        total++;
    }
    else
        totalimpar++;

    if( a > 0)
        totalpos++;
    else if( a < 0 )
        totalneg++;

    if ( !(b % 2) )
    {
        total++;
    }
    else
        totalimpar++;

    if( b > 0)
        totalpos++;
    else if( b < 0 )
        totalneg++;

    if (!(c % 2))
    {
        total++;
    }
    else
        totalimpar++;

    if( c > 0)
        totalpos++;
    else if( c < 0 )
        totalneg++;

    if (!(d % 2))
    {
        total++;
    }
    else
        totalimpar++;

    if( d > 0)
        totalpos++;
    else if( d < 0 )
        totalneg++;

    if (!(e % 2))
    {
        total++;
    }
    else
        totalimpar++;

    if( e > 0)
        totalpos++;
    else if( e < 0 )
        totalneg++;

    cout << total << " valor(es) par(es)" << endl;
    cout << totalimpar << " valor(es) impar(es)" << endl;
    cout << totalpos << " valor(es) positivo(s)" << endl;
    cout << totalneg << " valor(es) negativo(s)" << endl;
    return 0;
}
