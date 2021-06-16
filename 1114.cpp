#include <iostream>

using namespace std;

int
main()
{
    int pw;

    cin >> pw;

    while (pw != 2002)
    {
        cout << "Senha Invalida" << endl;

        cin >> pw;
    }

    cout << "Acesso Permitido" << endl;

    return 0;
}
