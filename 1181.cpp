#include <iostream>
#include <iomanip>
#define Q 12

using namespace std;

int
main()
{
  int L;
  char T;
  float M[Q][Q], soma = 0, media;

  cin >> L;
  cin >> T;

  for (int i = 0; i < Q; i++)
  {
    for (int j = 0; j < Q; j++)
      cin >> M[i][j];
  }

  for (int k = 0; k < Q; k++)
      soma += M[L][k];

  if (T == 'S')
    cout << fixed << setprecision(1) << soma << endl;

  else if (T == 'M')
    cout << fixed << setprecision(1) << soma / Q << endl;

  return 0;
}
