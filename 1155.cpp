#include <iostream>

using namespace std;

int
main()
{
    double s = 1;

    cout.precision(2);

    for (int i = 2; i <= 100; i++)
        s += 1/double(i);

    cout << fixed << s << endl;

    return 0;
}
