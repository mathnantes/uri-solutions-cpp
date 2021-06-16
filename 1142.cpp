#include <iostream>

using namespace std;

int
main()
{
    int n, x = 1, y = 4;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = x; j < y; j++)
        {
            cout << j << " ";
        }

        cout << "PUM" << endl;

        x += 4;
        y += 4;
    }

    return 0;
}
