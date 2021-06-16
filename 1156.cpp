#include <iostream>
#include <math.h>

using namespace std;

int
main()
{
    double s = 1;
    int j = 1;

    cout.precision(2);

    for (int i = 3; i <= 39; i += 2)
    {
        s += i/(double)pow(2,j);
        j++;
    }

    cout << fixed << s << endl;

    return 0;
}
