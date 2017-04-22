#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    string name;
    double salary;
    double totalSells;

    cin >> name;
    cin >> salary;
    cin >> totalSells;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << salary+(totalSells*0.15) << endl;
    return 0;
}
