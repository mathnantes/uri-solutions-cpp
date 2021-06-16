#include <iostream>

using namespace std;
int
main()
{
    int x, y, aux, soma=0;

    cin >> x >> y;

    if (x>y)
    {
        aux = x;
        x = y;
        y = aux;
    }

    x++;

    for(int i=x; i<y; i++)
    {
        if (i%2 != 0)
            soma += i;
    }

    cout << soma << endl;

    return 0;
}
