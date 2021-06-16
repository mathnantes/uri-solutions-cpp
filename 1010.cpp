#include <iostream>
#include <iomanip>
#define comissao 15

using namespace std;

int
main()
{
    int codPeca1, qntPeca1, codPeca2, qntPeca2;
    float valorPeca1, valorPeca2, total;

    cin >> codPeca1 >> qntPeca1 >> valorPeca1;
    cin >> codPeca2 >> qntPeca2 >> valorPeca2;

    total = qntPeca1*valorPeca1 + qntPeca2*valorPeca2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
