#include <iostream>
using namespace std;

int main()
{
    int h1,m1,h2,m2,hour,minutes;

    while(cin >> h1 >> m1 >> h2 >> m2){

    hour = h2 - h1;

    if(hour < 0)
    {
        hour = 24 - h1 + h2;
    }
    minutes = m2 - m1;

    if(minutes < 0)
    {
        minutes = 60 - m1 + m2;

        hour = hour - 1;
    }
    if(h1 == h2 && m1 == m2)
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }

    else cout << "O JOGO DUROU " << hour << " HORA(S) E " << minutes <<" MINUTO(S)" << endl;
}
return 0;

}
