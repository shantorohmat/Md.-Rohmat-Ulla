#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int count = 0,count1 = 0;

        char sp[10000];
        char s[100],p[100];

        scanf(" %[^\n]",sp);

        char *word = strtok(sp,"!?,.; ");
        int i = 0;
        while(word != NULL)
        {
            if(strlen(word) > 0)
            {        //s[i] = word;
                     strcpy(p[i],word);
          for(int i = 0;i < count;i++)
            {
                //char l = p[i];//int r = strncmp(l,*word,2);
                    if(strcmp(p[i],word) == 0)
                {
                    count1++;
                    cout  << count1 << " ";
                }
            }

                count++;
            }
            word = strtok(NULL,"!?,.; ");
            i++;
        }

        for(int i = 0;i <count;i++)
        {
            for(int j = 0;j < count;j++)
            {
                if(strcmp(p[i],s[i]))
                {
                    count1++;
                    cout  << count1 << " ";
                }


            }


        }
        cout << endl;
        cout << "Count = " <<  count << "count1 = " << count1 << endl;
    }
    return 0;
}

