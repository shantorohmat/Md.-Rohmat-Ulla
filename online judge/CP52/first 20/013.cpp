#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
    int t,count,count1,x;

    cin >> t;

    while(t--)
    {
        count = 0,count1 = 1;

        char sp[10000];

        scanf(" %[^\n]",sp);

        char *s[100];

        char *word = strtok(sp,"!?,.; ");
        int i = 0;
        while(word != NULL)
        {
            if(strlen(word) > 0)
            {
                s[i] = word;

            for(int j = 0;j < count;j++)
            {
             if(strcmp(s[j],word) == 0)
                {

                 count1++;


                break;
                }
            }
            count++;
            }
            i++;
            word = strtok(NULL,"!?,.; ");

        }

    int fact = 1;

    for(int i = 1;i <= count;i++)
    {
        fact = fact * i;
    }
    if(count1 > 1)
    {
        int fact1 = 1;

        for(int i = 1;i <= count1;i++)
        {
            fact1 = fact1 * i;
        }



        x = (fact/fact1);

        cout << "1/" << x << endl;




    }
    else{
        cout << "1/" << fact << endl;

    }
    }
    return 0;


}
