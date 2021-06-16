#include <iostream>
#define MAX 20

using namespace std;

int
main()
{
  int N[MAX], aux;

  for (int i = 0; i < MAX; i++)
    cin >> N[i];

  int a = 0;

  for (int j = MAX-1; j >= MAX/2; j--)
  {
    aux = N[j];
    N[j] = N[a];
    N[a] = aux;
    a++;
  }

  for (int k = 0; k < MAX; k++)
    cout << "N[" << k << "] = " << N[k] << endl;

  return 0;
}
