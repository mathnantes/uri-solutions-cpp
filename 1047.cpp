#include <iostream>

using namespace std;

int
main()
{
    int hI, mI, hF, mF, difH, difM;

    cin >> hI >> mI >> hF >> mF;

    if (hF == hI)
    {
        if (mF == mI)
            cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
        else
        {
            if (mF > mI)
            {
                difM = mF - mI;
                difH = hF - hI;

                cout << "O JOGO DUROU 0 HORA(S) E " << difM << " MINUTO(S)" << endl;
            }

            if (mI > mF)
            {
                hF += 23;
                mF += 60;
                difM = mF - mI;
                difH = hF - hI;

                cout << "O JOGO DUROU " << difH << " HORA(S) E " << difM << " MINUTO(S)" << endl;
            }

        }
    }

    else if (hF > hI)
    {
        if (mF >= mI)
        {
            difM = mF - mI;
            difH = hF - hI;
        }

        if (mI > mF)
        {
            mF += 60;
            hF -= 1;
            difM = mF - mI;
            difH = hF - hI;
        }

        cout << "O JOGO DUROU " << difH << " HORA(S) E " << difM << " MINUTO(S)" << endl;
    }

    else if (hI > hF)
    {
        hF += 24;

        if (mF >= mI)
        {
            difM = mF - mI;
            difH = hF - hI;
        }

        if (mI > mF)
        {
            mF += 60;
            hF -= 1;
            difM = mF - mI;
            difH = hF - hI;
        }

        cout << "O JOGO DUROU " << difH << " HORA(S) E " << difM << " MINUTO(S)" << endl;
    }

    return 0;
}
