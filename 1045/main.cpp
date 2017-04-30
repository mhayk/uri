#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a,b,c,array[3],aux;
    int i,j;
    cin >> a >> b >> c;
    array[0] = a;
    array[1] = b;
    array[2] = c;

    for(i=0; i<3; i++)
    {
        j=0;
        for(j=j+i; j < 3; j++)
        {
            if(array[i] < array[j])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    a = array[0];
    b = array[1];
    c = array[2];

    cout << "A: " << a << " B: " << b << " C: " << c << endl;

    if(a >= (b+c))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    if( pow(a,2) == ( pow(b,2) + pow(c,2) ) )
        cout << "TRIANGULO RETANGULO" << endl;
    if( pow(a,2) > ( pow(b,2) + pow(c,2) ) )
        cout << "TRIANGULO OBTUSANGULO" << endl;
    if( pow(a,2) < ( pow(b,2) + pow(c,2) ) )
        cout << "TRIANGULO ACUTANGULO" << endl;
    if( a == b && b == c )
        cout << "TRIANGULO EQUILATERO" << endl;
    if( (a == b && b != c ) || (a == c && c != b) || (b == c && c != a ) )
        cout << "TRIANGULO ISOSCELES" << endl;
    return 0;
}
