#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    double A,B,C;
    cin >> A >> B >> C;
    // area = (base * altura)/2
    cout << "TRIANGULO: " << fixed << setprecision(3) << (A*C)/2 << endl;
    // area = pi * (r^2)
    cout << "CIRCULO: " << fixed << setprecision(3) << 3.14159 * pow(C,2) << endl;
    // area = ((base menor + base maior) * altura) / 2
    cout << "TRAPEZIO: " << fixed << setprecision(3) << ((A+B)*C)/2 << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << B*B << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << A*B << endl;
    return 0;
}
