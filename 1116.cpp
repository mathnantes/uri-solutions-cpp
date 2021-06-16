#include <iostream>

using namespace std;

int
main()
{
    int n, x, y, i = 0;
    double r;

    cout.precision(1);

    cin >> n;

    do
    {
        cin >> x >> y;

        if (y == 0)
            cout << "divisao impossivel" << endl;
        else
        {
            r = (double)x / (double)y;
            cout << fixed << r << endl;
        }

        i++;

    } while (i < n);

    return 0;
}
