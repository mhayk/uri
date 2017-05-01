#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double salary;
    cin >> salary;
    if ( (salary >= 0) && (salary <= 400.00) )
    {
        cout << "Novo salario: " << fixed << setprecision(2) << salary + (salary * 0.15) << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << salary * 0.15 << endl;
        cout << "Em percentual: 15 %" << endl;
        return 0;
    }
    if ( (salary >= 400.01) && (salary <= 800.00) )
    {
        cout << "Novo salario: " << fixed << setprecision(2) << salary + (salary * 0.12) << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << salary * 0.12 << endl;
        cout << "Em percentual: 12 %" << endl;
        return 0;
    }
    if ( (salary >= 800.01) && (salary <= 1200.00) )
    {
        cout << "Novo salario: " << fixed << setprecision(2) << salary + (salary * 0.10) << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << salary * 0.10 << endl;
        cout << "Em percentual: 10 %" << endl;
        return 0;
    }
    if ( (salary >= 1200.01) && (salary <= 2000.00) )
    {
        cout << "Novo salario: " << fixed << setprecision(2) << salary + (salary * 0.07) << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << salary * 0.07 << endl;
        cout << "Em percentual: 7 %" << endl;
        return 0;
    }
    if ( salary > 2000.00 )
    {
        cout << "Novo salario: " << fixed << setprecision(2) << salary + (salary * 0.04) << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << salary * 0.04 << endl;
        cout << "Em percentual: 4 %" << endl;
        return 0;
    }

    return 0;
}

