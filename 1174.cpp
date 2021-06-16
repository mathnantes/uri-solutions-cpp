#include <iostream>
#define MAX 100

using namespace std;

int
main()
{
  float A[MAX];

  cout.precision(1);

  for (int i = 0; i < MAX; i++)
    cin >> A[i];

  for (int j = 0; j < MAX; j++)
  {
    if (A[j] <= 10)
      cout << "A[" << j << "] = " << fixed <<A[j] << endl;
  }

  return 0;
}
