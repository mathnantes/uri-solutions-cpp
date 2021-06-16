#include <iostream>
#include <iomanip>
#define pi 3.14159

using namespace std;

int
main()
{
    double A, B, C, areaTri, areaCirc, areaTrap, areaQuad, areaRet;

    cin >> A >> B >> C;

    areaTri = A*C/2;
    areaCirc = pi*C*C;
    areaTrap = (A+B)*C/2;
    areaQuad = B*B;
    areaRet = A*B;

    cout << "TRIANGULO: " << fixed << setprecision(3) << areaTri << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << areaCirc << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << areaTrap << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << areaQuad << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << areaRet << endl;

    return 0;
}


