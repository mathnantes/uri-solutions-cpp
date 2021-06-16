#include <iostream>
#include <iomanip>

using namespace std;

int
main()
{
    double salario, imposto;
    int percentual;

    cin >> salario;

    if (salario > 0.00 && salario <= 2000.00)
        cout << "Isento" << endl;

    else
    {
        if (salario > 4500.00)
        {
            percentual = 28;
            imposto = (salario-4500.00)*percentual/100.00 + 1500*18/100 + 1000*8/100;

        }

        else if (salario > 3000.00 && salario <= 4500.00)
        {
            percentual = 18;
            imposto = (salario-3000.00)*percentual/100.00 + 1000*8/100;

        }

        else if (salario > 2000.00 && salario <= 3000.00)
        {
            percentual = 8;
            imposto = (salario-2000.00)*percentual/100;

        }

        cout << "R$ " << fixed << setprecision(2) << imposto << endl;
    }

    return 0;
}
