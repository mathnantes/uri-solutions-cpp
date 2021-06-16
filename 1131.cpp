#include <iostream>

using namespace std;

int
main()
{
    int gInter, gGremio, n;
    int grenais = 0, vInter = 0, vGremio = 0, empates = 0;

    do
    {
        cin >> gInter >> gGremio;

        grenais++;

        if (gInter > gGremio)
            vInter++;
        else if (gGremio > gInter)
            vGremio++;
        else if (gGremio == gInter)
            empates++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> n;

    } while (n == 1);

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << vInter << endl;
    cout << "Gremio:" << vGremio << endl;
    cout << "Empates:" << empates << endl;

    if (vInter > vGremio)
        cout << "Inter venceu mais" << endl;
    else
        cout << "Gremio venceu mais" << endl;

    return 0;
}
