#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    double pi = 3.14159;
    double raio;
    cin >> fixed >> setprecision(2) >> raio;
    cout << "VOLUME = " << fixed << setprecision(3) << (4.0/3.0)*pi*pow(raio,3)  << endl;
    return 0;
}
