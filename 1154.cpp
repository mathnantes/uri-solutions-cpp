#include <iostream>

using namespace std;

int
main()
{
    int n, qnt = 0;
    double media = 0;

    cout.precision(2);

    cin >> n;

    if (n < 0)
    {
        cout << fixed << media << endl;
        exit(0);
    }
    else
    {
        do
        {
            media += n;
            qnt++;

            cin >> n;

        } while (n >= 0);

        cout << fixed << media / qnt << endl;
    }

    return 0;
}
