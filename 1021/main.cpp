#include <iostream>
#include <iomanip>
#include "math.h"

using namespace std;

int main(int argc, char *argv[])
{
    double value;
    double coins;
    cin >> fixed >> setprecision(2) >>value;
    cout << "NOTAS:" << endl;
    cout << (int) value/100 << " nota(s) de R$ 100.00" << endl;
    cout << (int) fmod(value,100.00)/50 << " nota(s) de R$ 50.00" << endl;
    cout << (int) fmod(fmod(value,100.00),50)/20 << " nota(s) de R$ 20.00" << endl;
    cout << (int) fmod(fmod(fmod(value,100.00),50),20)/10 << " nota(s) de R$ 10.00" << endl;
    cout << (int) fmod(fmod(fmod(fmod(value,100.00),50),20),10)/5 << " nota(s) de R$ 5.00" << endl;
    cout << (int) fmod(fmod(fmod(fmod(fmod(value,100.00),50),20),10),5)/2 << " nota(s) de R$ 2.00" << endl;

    coins = fmod(fmod(fmod(fmod(fmod(fmod(value,100.00),50),20),10),5),2);

    cout << "MOEDAS:" << endl;
    cout << (int) coins << " moeda(s) de R$ 1.00" << endl;
    coins = (fmod(coins,1)*100);
    cout << (int) coins/50 << " moeda(s) de R$ 0.50" << endl;
    cout << (int) fmod(coins,50)/25 << " moeda(s) de R$ 0.25" << endl;
    cout << (int) fmod(fmod(coins,50),25)/10 << " moeda(s) de R$ 0.10" << endl;
    cout << (int) fmod(fmod(fmod(coins,50),25),10)/5 << " moeda(s) de R$ 0.05" << endl;
    cout << (int) fmod(fmod(fmod(fmod(coins,50),25),10),5) << " moeda(s) de R$ 0.01" << endl;
    return 0;
}
