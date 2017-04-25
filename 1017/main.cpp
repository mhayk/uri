#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int timeTravel, velocityAverage;
    cin >> timeTravel;
    cin >> velocityAverage;
    cout << fixed << setprecision(3) << ( (double) velocityAverage/12) * (double) timeTravel << endl;
    return 0;
}

