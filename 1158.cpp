#include <iostream>

using namespace std;

int
main()
{
    int n, x, y, soma = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        do
        {
            if (x % 2 != 0)
            {
                soma += x;
                y--;
            }

            x++;

        } while (y > 0);

        cout << soma << endl;
        soma = 0;
    }

    return 0;
}
