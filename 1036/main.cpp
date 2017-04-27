#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c,r1,r2;
    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "Impossivel calcular";
        return 1;
    }
    r1 = pow(b,2)-(4*a*c);
    r2 = pow(b,2)-(4*a*c);

    if (r1 < 0)
    {
        cout << "Impossivel calcular";
        return 1;
    }
    if (r2 < 0)
    {
        cout << "Impossivel calcular";
        return 1;
    }

    cout << "R1 = " << fixed << setprecision(5) << ( (-(b)) + sqrt(r1) ) / (2*a) << endl;
    cout << "R2 = " << fixed << setprecision(5) << ( (-(b)) - sqrt(r2) ) / (2*a) << endl;

    return 0;
}

