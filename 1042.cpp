#include <iostream>

using namespace std;

int
main()
{
    int A, B, C;

    cin >> A >> B >> C;

    if (A <= B && B <= C)
        cout << A << endl << B << endl << C << endl;
    if (A <= C && C <= B)
        cout << A << endl << C << endl << B << endl;
    if (B <= A && A <= C)
        cout << B << endl << A << endl << C << endl;
    if (B <= C && C <= A)
        cout << B << endl << C << endl << A << endl;
    if (C <= A && A <= B)
        cout << C << endl << A << endl << B << endl;
    if (C <= B && B <= A)
        cout << C << endl << B << endl << A << endl;

    cout << endl << A << endl << B << endl << C << endl;

    return 0;
}
