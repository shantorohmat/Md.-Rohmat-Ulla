#include <iostream>
using namespace std;
int main()
{
    int h1,m1,h2,m2,hour,minutes;

    cin >> h1 >> m1 >> h2 >> m2;

    if(h2 > h1)
    {
        hour = h2 - h1  ;

        if(m2 > m1) {minutes = m2 - m1; }

        else if(m1 > m2) {hour = hour - 1,minutes = 60 - m1 + m2 ; }

        else if(m1 == m2) { hour = hour + 1,minutes = 0 ; }

        cout << "O JOGO DUROU " << hour << " HORA(S) E " << minutes <<" MINUTO(S)" << endl;
    }

    else if(h1 > h2)
    {
        hour = 24 - h1 + h2;

        if(m2 > m1) {minutes = m2 - m1; }

        else if(m1 > m2) {hour = hour - 1,minutes = 60 - m1 + m2 ; }

        else if(m1 == m2) { hour = hour + 1,minutes = 0 ; }

        cout << "O JOGO DUROU " << hour << " HORA(S) E " << minutes <<" MINUTO(S)" << endl;

    }

    else
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }




    return 0;


}
