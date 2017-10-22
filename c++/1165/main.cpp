#include <iostream>

using namespace std;

int main()
{
    int times;
    cin >> times;
    for(int i = 0; i < times; i++)
    {
        int num,count=0;
        cin >> num;
        for(int j = 2; j < num; j++ )
        {
            if(num % j == 0)
            {
                cout << num << " nao eh primo" << endl;
                count++;
                break;
            }
        }
        if(count == 0)
        {
            cout << num << " eh primo" << endl;
        }
    }
    return 0;
}

