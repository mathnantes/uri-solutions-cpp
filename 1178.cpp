#include <iostream>
#include <iomanip>

using namespace std;

int
main()
{
  double x, n[100];

  cin >> n[0];

  cout << "N[" << 0 << "] = " << fixed << setprecision(4) << n[0] << endl;

  for (int i = 1; i < 100; i++)
  {
    n[i] = n[i-1] / 2;

    cout << "N[" << i << "] = " << fixed <<setprecision(4) << n[i] << endl;
  }

  return 0;
}
