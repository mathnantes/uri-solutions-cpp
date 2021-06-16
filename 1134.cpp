#include <iostream>

using namespace std;

int
main()
{
    int code, alc, gas, dsl;

    alc = gas = dsl = 0;

    do
    {
        cin >> code;

        if (code == 1)
            alc++;

        else if (code == 2)
            gas++;

        else if (code == 3)
            dsl++;


    } while (code != 4);

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alc <<endl;
    cout << "Gasolina: " << gas <<endl;
    cout << "Diesel: " << dsl << endl;

    return 0;
}
