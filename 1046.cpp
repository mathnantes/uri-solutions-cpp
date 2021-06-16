#include <iostream>
#include <math.h>

using namespace std;

int
main()
{
    int hi, hf, duracao;

    cin >> hi >> hf;

    if (hi < hf)
    {
        duracao = hf - hi;
    }
    else
    {
        hf += 24;
        duracao = hf - hi;
    }

    cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;

    return 0;
}
