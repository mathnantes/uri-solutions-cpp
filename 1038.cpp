#include <iostream>
#include <iomanip>

using namespace std;

int
main()
{
    int codigo, qnt;
    double total;

    total = 0;

    cin >> codigo >> qnt;

    if (codigo == 1)
        total = 4*qnt;
    else if (codigo == 2)
        total = 4.5*qnt;
    else if (codigo == 3)
        total = 5*qnt;
    else if (codigo == 4)
        total = 2*qnt;
    else if (codigo == 5)
        total = 1.5*qnt;

    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
