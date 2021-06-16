#include <iostream>

using namespace std;

int
main()
{
    int T, PA, PB, y = 0, sec = 0;
    double G1, G2;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> PA >> PB >> G1 >> G2;

        G1 = 1.00 + G1/100.00;
        G2 = 1.00 + G2/100.00;

        while (PB >= PA)
        {
            PA *= G1;
            PB *= G2;
            y++;

            if (y > 100)
            {
                sec = 1;
                break;
            }
        }

        if (sec == 0)
            cout << y << " anos." << endl;
        else
            cout << "Mais de 1 seculo." << endl;

        y = sec = 0;
    }

    return 0;
}
