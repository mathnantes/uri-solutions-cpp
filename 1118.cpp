#include <iostream>

using namespace std;

int
main()
{
    double nota, media = 0;
    int novo = 1, valida = 0;

    cout.precision(2);

    do
    {
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

        valida = media = 0;

        do
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> novo;

        } while (novo != 1 && novo != 2);

        if (novo == 2)
            break;

    } while (novo == 1);

    return 0;
}
