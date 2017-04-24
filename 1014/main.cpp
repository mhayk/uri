#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int distance;
    double totalFuel;

    cin >> distance;
    cin >> totalFuel;
    cout << fixed << setprecision(3) << distance/totalFuel << " km/l" << endl;
    return 0;
}
