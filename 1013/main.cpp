#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int maior,a,b,c;
    cin >> a >> b >> c;

    if(a > b)
        maior = a;
    else
        maior = b;

    if(maior < b)
        maior = b;

    cout << maior << " eh o maior" << endl;
    return 0;
}
