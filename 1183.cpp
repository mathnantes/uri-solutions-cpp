#include <iostream>
#include <iomanip>
#define Q 12

using namespace std;

int
main()
{
  char T;
  float M[Q][Q], soma = 0, media;

  cin >> T;

  for (int i = 0; i < Q; i++)
  {
    for (int j = 0; j < Q; j++)
      cin >> M[i][j];
  }

  int aux = 1, qnt = 0;

  for (int x = 0; x < Q - 1; x++)
  {
    for (int y = aux; y < Q; y++)
    {
      soma += M[x][y];
      qnt++;
    }

    aux++;
  }

  if (T == 'S')
    cout << fixed << setprecision(1) << soma << endl;

  else if (T == 'M')
    cout << fixed << setprecision(1) << soma / qnt << endl;

  return 0;
}
