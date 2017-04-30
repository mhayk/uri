#include <iostream>

using namespace std;

int main()
{
    int iniHour, iniMin, termHour, termMin,totalHour,totalMin;
    cin >> iniHour >> iniMin >> termHour >> termMin;

    if(iniHour > termHour)
    {
        totalHour = (( ( (termHour * 60) + termMin)+1440) - ( (iniHour * 60 ) + iniMin) ) / 60;
        totalMin = ( (( (termHour * 60) + termMin)+1440) - ( (iniHour * 60 ) + iniMin) ) % 60;
    }

    if(iniHour < termHour)
    {
        totalHour = (( ( (termHour * 60) + termMin) - ( (iniHour * 60 ) + iniMin ) ) / 60);
        totalMin = (( (termHour * 60) + termMin) - ( (iniHour * 60 ) + iniMin ) ) % 60;
    }



    if ( (iniHour == termHour) && (iniMin == termMin) )
    {
        totalHour = 24;
        totalMin = 0;
    }


    cout << "O JOGO DUROU " << totalHour << " HORA(S) E " << totalMin << " MINUTO(S)" << endl;

    return 0;
}
