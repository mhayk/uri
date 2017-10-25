#include <iostream>

using namespace std;

int main()
{
    int N,i,min,position=0;
    cin >> N;
    int *array = new int[N];

    for(i=0; i < N; i++)
    {
        cin >> array[i];
    }

    min = array[0];
    for(i=1; i < N; i++)
    {
        if(array[i] < min) {
            min = array[i];
            position = i;
        }
    }
    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << position << endl;

    delete []array;
}

