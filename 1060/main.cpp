#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,e,f;
    int total;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    total =0;
    if(a >= 0)
        total++;
    if(b >= 0)
        total++;
    if(c >= 0)
        total++;
    if(d >= 0)
        total++;
    if(e >= 0)
        total++;
    if(f >= 0)
        total++;

    cout << total << " valores positivos" << endl;

    return 0;
}
