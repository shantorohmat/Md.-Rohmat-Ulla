#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int count = 0;

        char sp[10000];

        scanf(" %[^\n]",sp);

        char* word = strtok(sp,",.?;! ");

        int i = 0;

        char *s[100];

        while(word != NULL)
        {
            if(strlen(word) > 0)
            {

                ///s[i] = word;

                ///i++;

                for(int j = (strlen(word)-1);j >= 0;j--)
                {
                    cout << word[j] ;
                }
                //reverse(word.begin(),word.end());

                cout << " ";
            }
            word = strtok(NULL,"?!,.; ");

        }

    }
}
