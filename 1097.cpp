#include <iostream>

using namespace std;

int
main()
{
    float j = 1;

    for (float i = 0; i <= 2.1; i += 0.2)
    {
        cout << "I=" << i << " J=" << j << endl;
        cout << "I=" << i << " J=" << j+1 << endl;
        cout << "I=" << i << " J=" << j+2 << endl;

        j += 0.2;
    }

    return 0;
}
