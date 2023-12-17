#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,e,x,avg;

    cin >> a >> b >> c >> d;

        x = (a*2 + b*3 + c*4 + d) / 10;

        cout << "Media: " << fixed << setprecision(1) << x << endl;

        if(x < 5)
        {
            cout << "Aluno reprovado." << endl;
        }
        if(x >= 7)
        {
            cout << "Aluno aprovado." << endl;
        }

        if(x >= 5 && x <= 6.9)
        {

            cout << "Aluno em exame." << endl;

            cin >> e;

            cout << "Nota do exame: " << e << endl;

            avg = (e + x)/2;

            if(avg >= 5)
            {
                cout << "Aluno aprovado." << endl;
            }
            else if(avg < 4.9) cout << "Aluno reprovado." << endl;

            cout << "Media final: " << fixed << setprecision(1) << avg << endl;
        }


    return 0;
}
