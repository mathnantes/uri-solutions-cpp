#include <iostream>
#include <iomanip>
#define comissao 15

using namespace std;

int
main()
{
    string JOAO;
    double salariofixo, vendas, total;

    cin >> JOAO;
    cin >> salariofixo;
    cin >> vendas;

    vendas = vendas * 15/100;

    total = salariofixo + vendas;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
