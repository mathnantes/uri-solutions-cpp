#include <iostream>

using namespace std;

int
main()
{
    double x, qnt;
    qnt = 0;

    for (int i=0; i<=5; i++)
    {
        cin >> x;
        if (x > 0)
        {
            qnt++;
        }
    }

    cout << qnt << " valores positivos" << endl;

    return 0;
}
