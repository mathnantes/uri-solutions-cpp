#include <iostream>

using namespace std;

int
main()
{
  int num[15] ,
      par[5] ,
      impar[5] ,
      index_par = 0,
      index_impar = 0;

  for (int i = 0; i < 15; i++)
    cin >> num[i];

  for (int j = 0; j < 15; j++)
  {
    if (num[j] % 2 == 0)
    {
      par[index_par] = num[j];
      index_par++;

      if (index_par == 5)
      {
        for (int k = 0; k < 5; k++)
          cout << "par[" << k << "] = " << par[k] << endl;

        index_par = 0;
      }
    }
    else
    {
      impar[index_impar] = num[j];
      index_impar++;

      if (index_impar == 5)
      {
        for (int l = 0; l < 5; l++)
          cout << "impar[" << l << "] = " << impar[l] << endl;

        index_impar = 0;
      }
    }
  }

  for (int n = 0; n < index_impar; n++)
    cout << "impar[" << n << "] = " << impar[n] << endl;

  for (int m = 0; m < index_par; m++)
    cout << "par[" << m << "] = " << par[m] << endl;


  return 0;
}
