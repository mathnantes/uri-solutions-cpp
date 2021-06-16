#include <iostream>
#include <iomanip>

using namespace std;
int
main()
{
    double x, qnt=0, media=0;

    for(int i=0; i<=5; i++)
    {
        cin >> x;

        if(x > 0)
        {
            media += x;
            qnt++;
        }
    }

    media = media/qnt;

    cout << qnt << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media << endl;

    return 0;
}
