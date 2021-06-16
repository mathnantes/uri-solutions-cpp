#include <iostream>

using namespace std;

int
main()
{
    double nota, media = 0;
    int valida = 0;

    cout.precision(2);

    do
    {
        cin >> nota;

        if (nota < 0 || nota > 10.0)
            cout << "nota invalida" << endl;
        else
        {
            media += nota;
            valida++;
        }

    } while (valida < 2);

    cout << "media = " << fixed << media / 2 << endl;

    return 0;
}
