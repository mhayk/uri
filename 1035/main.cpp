#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int A,B,C,D;
    cin >> A >> B >> C >> D;

    if( !( (A > 0) && (B > 0) && (C > 0) && (D > 0) ) )
    {
        cout << "Valores nao aceitos" << endl;
        return 1;
    }

    if( !((A % 2) == 0) )
    {
        cout << "Valores nao aceitos" << endl;
        return 1;
    }

    if( (B > C) && (D > A) &&  ( (C+D) > (A+B) ) )
    {
        cout << "Valores aceitos" << endl;
        return 0;
    }
    {
        cout << "Valores nao aceitos" << endl;
        return 1;
    }

    return 1;
}
