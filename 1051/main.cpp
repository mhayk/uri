#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double salary;

    cin >> salary;

    if( (salary >= 0) && (salary <= 2000) )
        cout << "Isento" << endl;
    else if( (salary >= 2000.01) && (salary <= 3000) )
        cout << "R$ "<< fixed << setprecision(2) << salary*0.08 << endl;
    else if( (salary >= 3000.01) && (salary <= 4500) )
        cout << "R$ "<< fixed << setprecision(2) << (1000)*0.08 + (salary-3000)*0.18 << endl;
    else if( salary >= 4500.01 )
        cout << "R$ "<< fixed << setprecision(2) << (1000)*0.08 + (1500)*0.18 + (salary-4500)*0.28 << endl;
    return 0;
}
