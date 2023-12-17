///cp52 16 no
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,k;

    cin  >> t;

    while(t--)
    {
        char sp[1005];

        scanf(" %[^\n]",sp);

        char word[1005];

        for(i = 0,k = 0;i < strlen(sp);i++)
        {
            if(sp[i] != ' ')
            {
                word[k] = sp[i];
                k++;
            }

            else if(k > 0)
            {
                word[k] = '\0';

                for(int j = strlen(word)-1;j >= 0;j--)
                {
                    cout << word[j] ;
                }
                cout << ' ';

                k = 0;
            }
        }
        if(k > 0)
        {
            word[k] = '\0';
           for(int j = strlen(word)-1;j >= 0;j--)
                {
                    cout << word[j] ;
                }

        }
    }
    return 0;
}
