#include <iostream>

using namespace std;

int main()
{
    int num,first=0,second=1,result=0;
    cin >> num;

    if(num == 0 || num == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    cout << "0 1";

    for (int i=2; i < num; i++){
        result = first + second;
        first = second;
        second = result;
        cout <<  " " << result;
    }
    cout << endl;
    return 0;
}

