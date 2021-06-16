#include <iostream>
#include <math.h>

using namespace std;

int
main()
{
    float A, B, C, aux;

    cin >> A >> B >> C;

    if (B > A)
    {
        aux = A;
        A = B;
        B = aux;
    }

    if (C > A)
    {
        aux = A;
        A = C;
        C = aux;
    }

    if (C > B)
    {
        aux = B;
        B = C;
        C = aux;
    }

    if (A >= B+C)
        cout << "NAO FORMA TRIANGULO" << endl;
    else
    {
        if (pow(A,2) == pow(B,2)+pow(C,2))
            cout << "TRIANGULO RETANGULO" << endl;
        if (pow(A,2) > pow(B,2)+pow(C,2))
            cout << "TRIANGULO OBTUSANGULO" << endl;
        if (pow(A,2) < pow(B,2)+pow(C,2))
            cout << "TRIANGULO ACUTANGULO" << endl;
        if (A == B && B == C)
            cout << "TRIANGULO EQUILATERO" << endl;
        if (A == B && A != C && B != C || A == C && A != B && B != C || B == C && A != B && A != C)
            cout << "TRIANGULO ISOSCELES" << endl;
    }


    return 0;
}
