#include <iostream>
#include <iomanip>

using namespace std;

int
main()
{
    double salario, reajuste;
    int percentual;

    cin >> salario;

    if (salario >= 0 && salario <= 400.00)
    {
        percentual = 15;
        reajuste = salario*percentual/100;
        salario += reajuste;
    }

    else if (salario > 400.00 && salario <= 800.00)
    {
        percentual = 12;
        reajuste = salario*percentual/100;
        salario += reajuste;
    }

    else if (salario > 800.00 && salario <= 1200.00)
    {
        percentual = 10;
        reajuste = salario*percentual/100;
        salario += reajuste;
    }

    else if (salario > 1200.00 && salario <= 2000.00)
    {
        percentual = 7;
        reajuste = salario*percentual/100;
        salario += reajuste;
    }

    else if (salario > 2000.00)
    {
        percentual = 4;
        reajuste = salario*percentual/100;
        salario += reajuste;
    }

    cout << "Novo salario: " << fixed << setprecision(2) << salario << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
    cout << "Em percentual: " << percentual << " %" << endl;

    return 0;
}
