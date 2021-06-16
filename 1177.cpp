#include <iostream>

using namespace std;

int
main()
{
  int n[1000] ,
      t ,
      aux = 0;

  cin >> t;

  for (int i = 0; i < 1000; i++)
  {
    cout << "N[" << i << "] = " << aux << endl;
    aux++;

    if (aux == t)
      aux = 0;

  }

  return 0;
}
