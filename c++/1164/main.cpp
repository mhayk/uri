#include <iostream>

using namespace std;

int main()
{
    int times;

    cin >> times;

    for(int i = 0; i < times; i++)
    {
        int num,total=0;
        cin >> num;
        for(int j =1; j < num; j++)
        {
            if(num%j == 0)
                total+=j;
        }
        if(total == num)
            cout << num << " eh perfeito" << endl;
        else
            cout << num << " nao eh perfeito" << endl;
    }
    return 0;
}

