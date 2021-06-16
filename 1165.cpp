#include <iostream>

using namespace std;

int
main()
{
    int n, x, div = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        for (int j = 1; j <= x; j++)
        {
            if (x % j == 0)
                div++;
        }

        if (div > 2 || x == 0)
            cout << x << " nao eh primo" << endl;
        else
            cout << x << " eh primo" << endl;

        div = 0;
    }

    return 0;
}
