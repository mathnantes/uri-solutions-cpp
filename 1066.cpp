#include <iostream>

using namespace std;
int
main()
{
    int x, par=0, impar=0, positivo=0, negativo=0;

    for(int i=0; i<5; i++)
    {
        cin >> x;

        if(x%2 == 0)
            par++;
        if(x%2 != 0)
            impar++;
        if(x > 0)
            positivo++;
        if(x < 0)
            negativo++;
    }

    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;

    return 0;
}
