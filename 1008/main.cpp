#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int number;
    int hours;
    double valuePerHour;

    cin >> number;
    cin >> hours;
    cin >> valuePerHour;
    cout << "NUMBER = " << number << "\n";
    cout << "SALARY = U$ " << fixed << setprecision(2) << hours * valuePerHour << "\n";
    return 0;
}
