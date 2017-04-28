#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n1,n2,n3,n4,average;
    cin >> n1 >> n2 >> n3 >> n4;

    average = (n1*0.2)+(n2*0.3)+(n3*0.4)+(n4*0.1);
    cout << "Media: " << fixed << setprecision(1) << average << endl;
    if(average > 7.0)
    {
        cout << "Aluno aprovado." << endl;
        return 0;
    }

    if(average < 5.0)
    {
        cout << "Aluno reprovado." << endl;
        return 0;
    }

    if(average >= 5.0 && average <= 6.9)
    {
        cout << "Aluno em exame." << endl;
        cin >> n1;
        cout << "Nota do exame: " << fixed << setprecision(1) << n1 << endl;
        average = (average+n1)/2;
        if(average >= 5.0)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;
        cout << "Media final: " << fixed << setprecision(1) << average << endl;
    }

    return 0;
}

