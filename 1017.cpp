#include <iostream>
#include <iomanip>
#define consumoMedio 12;

using namespace std;

int
main()
{
    int tempo, velomedia;
    double distancia, litros;

    cin >> tempo >> velomedia;

    distancia = velomedia*tempo;
    litros = distancia/consumoMedio;

    cout << fixed << setprecision(3) << litros << endl;

    return 0;
}

