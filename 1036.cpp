#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int
main()
{
    double A, B, C, delta, x1, x2;

    cin >> A >> B >> C;

    delta = pow(B,2) - 4*A*C;

    if (A == 0 || delta < 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        x1 = (-B + sqrt(delta)) / (2*A);
        x2 = (-B - sqrt(delta)) / (2*A);

        cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << x2 << endl;
    }

    return 0;
}
