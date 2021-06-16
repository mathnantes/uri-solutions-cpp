#include <iostream>
#define velomedia 0.5

using namespace std;

int
main()
{
    int distancia, tempo;

    cin >> distancia;

    tempo = distancia/velomedia;

    cout << tempo << " minutos" << endl;

    return 0;
}
