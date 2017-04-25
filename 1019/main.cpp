#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int seconds;
    cin >> seconds;
    cout << seconds/3600 << ":" << (seconds%3600)/60 << ":" << ((seconds%3600)%60) << endl;
    return 0;
}
