#include <iostream>
#include <iomanip>

using namespace std;

int
main()
{
    int n, maior, pos;
    maior = pos = 0;

    for (int i = 0; i < 100; i++)
    {
        cin >> n;

        if (n > maior)
        {
            maior = n;
            pos = i;
        }
    }

    cout << maior << "\n" << pos+1 << endl;

    return 0;
}
