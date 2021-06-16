#include <iostream>

using namespace std;

int
main()
{
    int N, horas, minutos, segundos;

    cin >> N;

    minutos = N / 60;
    segundos = N - minutos*60;
    horas = minutos / 60;
    minutos = minutos - horas*60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}
