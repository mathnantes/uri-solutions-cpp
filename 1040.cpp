#include <iostream>
#include <iomanip>

using namespace std;

int
main()
{
    float N1, N2, N3, N4, media, exame;

    cin >> N1 >> N2 >> N3 >> N4;

    media = (N1*2 + N2*3 + N3*4 + N4*1)/10;

    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if (media >= 7.0)
        cout << "Aluno aprovado." << endl;
    else if (media < 5.0)
        cout << "Aluno reprovado." << endl;
    else if (media >= 5.0 && media < 7.0)
    {
        cout << "Aluno em exame." << endl;

        cin >> exame;
        media = (media + exame)/2;

        cout << "Nota do exame: " << fixed << setprecision(1) << exame << endl;

        if (media >= 5.0)
            cout << "Aluno aprovado." << endl;

        else if (media < 5.0)
            cout << "Aluno reprovado." << endl;

        cout << "Media final: " << fixed << setprecision(1) << media << endl;
    }

    return 0;
}
