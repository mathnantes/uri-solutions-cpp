#include <iostream>

using namespace std;

int
main()
{
    int x, z, n, soma = 0, i = 0;

    cin >> x;

    do
    {
        cin >> z;

    } while (z <= x);

    do
    {
        soma += x;
        x++;
        i++;

    } while (soma < z);

    cout << i << endl;

    return 0;
}
