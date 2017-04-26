#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int idade;
    cin >> idade;
    cout << idade/365 << " ano(s)" << endl;
    cout << (idade%365)/30 << " mes(s)" << endl;
    cout << (idade%365)%30 << " dia(s)" << endl;
    return 0;
}
