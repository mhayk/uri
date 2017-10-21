#include <iostream>

using namespace std;

int main()
{
    int times;
    std::cin >> times;

    for(int i=0; i < times; i++)
    {
        int num1,num2,total=0, j=1;
        std::cin >> num1 >> num2;
        while(j <= num2)
        {
            if( (num1 % 2) !=0)
            {
                total += num1;
                j++;
            }
            num1++;
        }
        std::cout << total << std::endl;
    }
}

