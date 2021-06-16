#include <iostream>

using namespace std;

int
main()
{
  int v, N[10];

  cin >> N[0];

  for (int i = 1; i < 10; i++)
  {
    N[i] = N[i-1]*2;
  }

  for (int j = 0; j < 10; j++)
    cout << "N[" << j << "] = " << N[j] << endl;

  return 0;
}
