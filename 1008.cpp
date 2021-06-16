#include <iostream>
#include <iomanip>

using namespace std;

int
main()
{
    int n, horas;
    float valorh, salario;

    cin >> n;
    cin >> horas;
    cin >> valorh;

    salario = valorh * horas;

    cout << "NUMBER = " << n << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;

    return 0;
}
