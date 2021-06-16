#include <iostream>

using namespace std;

int
main()
{
    int n, a = 0, b = 1, c, i = 3;

    cin >> n;

    if (n == 0)
        exit(0);
    if (n == 1)
        cout << a << endl;
    else
    {
        if (n == 2)
            cout << a << " " << b << endl;
        else
        {
            cout << a << " " << b << " ";

            while (i <= n)
            {
                c = a + b;
                a = b;
                b = c;

                if (i == n)
                    cout << c << endl;
                else
                    cout << c << " ";
                i++;
            }
        }
    }
    return 0;
}
