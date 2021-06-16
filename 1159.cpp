#include <iostream>

using namespace std;

int
main()
{
    int x, soma = 0, aux = 0;

    do
    {
        cin >> x;

        if (x == 0)
            exit(0);
        else
        {
            do
            {
                if (x % 2 == 0)
                {
                    soma += x;
                    aux++;
                }
                x++;

            } while (aux < 5);

            cout << soma << endl;
            soma = aux = 0;
        }

    } while (x != 0);

    return 0;
}
