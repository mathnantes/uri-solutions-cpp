#include <iostream>

using namespace std;

int
main()
{
  int t, n;
  long long fib[61];
  fib[0] = 0;
  fib[1] = 1;

  for (int j = 2; j <= 60; j++)
      fib[j] = fib[j-1] + fib[j-2];

  cin >> t;

  for (int i = 0; i < t; i++)
  {
    cin >> n;
    cout << "Fib(" << n << ") = " << fib[n] << endl;
  }

  return 0;
}
