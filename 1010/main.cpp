#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int codPiece1, amountPiece1, codPiece2, amountPiece2;
    double pricePiece1, pricePeice2;
    cin >> codPiece1 >> amountPiece1 >> pricePiece1;
    cin >> codPiece2 >> amountPiece2 >> pricePeice2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (amountPiece1*pricePiece1)+(amountPiece2*pricePeice2) << endl;
    return 0;
}
