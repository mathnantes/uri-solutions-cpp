#include <iostream>

using namespace std;

int
main()
{
    int n, fat;

    cin >> n;

    fat = n;

    if (n == 0 || n == 1)
        fat = 1;
    else
    {
        for (int i = n-1; i > 0; i--)
        {
            fat *= i;
        }
    }

    cout << fat << endl;

    return 0;
}
