#include <iostream>

using namespace std;

int
main()
{
    double N;
    int n100, n50, n20, n10, n5, n2, m100, m50, m25, m10, m5, m1;

    cin >> N;

    N = N + 0.001;
    int notas = N;
    int moedas = (N - notas) * 100;

    n100 = notas/100;
    notas = notas%100;
    n50 = notas/50;
    notas = notas%50;
    n20 = notas/20;
    notas = notas%20;
    n10 = notas/10;
    notas = notas%10;
    n5 = notas/5;
    notas = notas%5;
    n2 = notas/2;
    notas = notas%2;

    m100 = notas/1;
    notas = notas%1;
    m50 = moedas/50;
    moedas = moedas%50;
    m25 = moedas/25;
    moedas = moedas%25;
    m10 = moedas/10;
    moedas = moedas%10;
    m5 = moedas/5;
    moedas = moedas%5;
    m1 = moedas/1;

    cout << "NOTAS:" << endl;
    cout << n100 << " nota(s) de R$ 100.00" << endl;
    cout << n50 << " nota(s) de R$ 50.00" << endl;
    cout << n20 << " nota(s) de R$ 20.00" << endl;
    cout << n10 << " nota(s) de R$ 10.00" << endl;
    cout << n5 << " nota(s) de R$ 5.00" << endl;
    cout << n2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << m100 << " moeda(s) de R$ 1.00" << endl;
    cout << m50 << " moeda(s) de R$ 0.50" << endl;
    cout << m25 << " moeda(s) de R$ 0.25" << endl;
    cout << m10 << " moeda(s) de R$ 0.10" << endl;
    cout << m5 << " moeda(s) de R$ 0.05" << endl;
    cout << m1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
