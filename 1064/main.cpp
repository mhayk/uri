#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c,d,e,f,sum,average;
    int total;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    total = sum = average = 0;

    if(a >= 0)
    {
        total++;
        sum+=a;
    }
    if(b >= 0)
    {
        total++;
        sum+=b;
    }
    if(c >= 0)
    {
        total++;
        sum+=c;
    }
    if(d >= 0)
    {
        total++;
        sum+=d;
    }
    if(e >= 0)
    {
        total++;
        sum+=e;
    }
    if(f >= 0)
    {
        total++;
        sum+=f;
    }

    cout << total << " valores positivos" << endl;
    cout << fixed << setprecision(1) << sum/total << endl;

    return 0;
}
