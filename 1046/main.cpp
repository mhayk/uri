#include <iostream>

using namespace std;

int main()
{
    int a,b,total;
    cin >> a >> b;
    if(a > b)
        total = (24-a)+b;
    else
        total = b-a;
    if(a == 0 && b == 0)
        total = 24;
    cout << "O JOGO DUROU " << total << " HORA(S)" << endl;
    return 0;
}
