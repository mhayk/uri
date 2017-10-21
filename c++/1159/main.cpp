#include <iostream>

using namespace std;

int main()
{
    int num=1,total=0,i=1;

    while(1){
        cin >> num;

        if(num == 0)
            break;

        i = 1;
        total = 0;
        while(i <= 5)
        {
            if(num%2 == 0)
            {
                total += num;
                i++;
            }
            num++;
        }
        std::cout << total << std::endl;
    }

    return 0;
}

