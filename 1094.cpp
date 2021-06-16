#include <iostream>
#include <iomanip>

using namespace std;

int
main()
{
    int n, qnt, c, r, s, total;
    char tipo;
    cout.precision(2);

    total = c = r = s = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> qnt >> tipo;

        total += qnt;

        if (tipo == 'C')
            c += qnt;

        else if (tipo == 'R')
            r += qnt;

        else if (tipo == 'S')
            s += qnt;

    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << "Percentual de coelhos: " << fixed << (c*100)/double(total) << " %" << endl;
    cout << "Percentual de ratos: " << fixed << (r*100)/double(total) << " %" << endl;
    cout << "Percentual de sapos: " << fixed << (s*100)/double(total) << " %" << endl;

    return 0;
}
