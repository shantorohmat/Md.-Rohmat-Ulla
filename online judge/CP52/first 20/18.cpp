#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        char sp[10000];

        scanf(" %[^\n]",sp);

        for(int i = 0;sp[i] != '\0';i++)
        {
            if(sp[i] == 'a' || sp[i] == 'e' || sp[i] == 'i' || sp[i] =='o' || sp[i] == 'u')
            {
                cout << sp[i];
            }


        }
        cout <<  endl;

        for(int i = 0;sp[i] != '\0';i++)
        {
            if(sp[i] != 'a' && sp[i] != 'e' && sp[i] != 'i' && sp[i] !='o' && sp[i] != 'u' && sp[i] != ' ')
            {
                cout << sp[i];
            }

        }
        cout  << endl;
    }
    return 0;
}
