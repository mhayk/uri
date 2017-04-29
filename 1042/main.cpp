#include <iostream>

using namespace std;

int main()
{
    int a,b,c,i,j,aux;
    int array[3];

    cin >> a >> b >> c;

    array[0] = a;
    array[1] = b;
    array[2] = c;

    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(array[i] > array[j])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }

        }
    }
    for(i=0; i<3; i++)
        cout << array[i] << endl;

    cout << endl << a << endl << b << endl << c << endl;
    return 0;
}

