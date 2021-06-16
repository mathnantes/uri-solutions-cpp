#include <iostream>

using namespace std;

int
main()
{
    int N, valor, nota100, nota50, nota20, nota10, nota5, nota2, nota1;

    cin >> N;

    valor = N;

    nota100 = N / 100;
    N = N - nota100*100;
    nota50 = N / 50;
    N = N - nota50*50;
    nota20 = N / 20;
    N = N - nota20*20;
    nota10 = N / 10;
    N = N - nota10*10;
    nota5 = N / 5;
    N = N - nota5*5;
    nota2 = N / 2;
    N = N - nota2*2;
    nota1 = N / 1;

    cout << valor << endl;
    cout << nota100 << " nota(s) de R$ " << 100 << ",00" << endl;
    cout << nota50 << " nota(s) de R$ " << 50 << ",00" << endl;
    cout << nota20 << " nota(s) de R$ " << 20 << ",00" << endl;
    cout << nota10 << " nota(s) de R$ " << 10 << ",00" << endl;
    cout << nota5 << " nota(s) de R$ " << 5 << ",00" << endl;
    cout << nota2 << " nota(s) de R$ " << 2 << ",00" << endl;
    cout << nota1 << " nota(s) de R$ " << 1 << ",00" << endl;

    return 0;
}


