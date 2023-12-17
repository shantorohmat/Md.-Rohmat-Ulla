#include <iostream>
using namespace std;
int main()
{
    int h1,h2,m1,m2,min,hour,hour1,hour2;

    while(1)
    {
        cin >> h1 >> m1 >> h2 >> m2;

        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)   { break; }

        else if(h1 == 0) {h1 = 24;}

        else if(h2 == 0) {h2 = 24; }



            if((h2 >= h1) && (h2 >= h1)) { hour = h2 - h1,min = m2 - m1; }

            if((h2 > h1) && (m1 > m2)) { hour = h2 - h2 - 1,min = (60 - (m1 - m2));}

            if( (h1 > h2) && (m1 > m2) ) { hour = (12 - (h1 - h2) - 1),min = (60 - (m1 - m2)); }

            if((h1 >= h2) && (m2 >= m1)) { hour = (12 - (h1 - h2)),min = m2 - m1;}

               hour1 = ((hour * 60) + min);

               cout << hour1 << endl;

    }

    return 0;
}
