#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int count = 0;

        char sp[1000];

        scanf(" %[^\n]",sp);

        char* word = strtok(sp," ");

        while(word != NULL)
        {
            if(strlen(word) > 0)
            {
                for(int j = (strlen(word)-1);j >= 0;j--)
                {
                    cout << word[j] ;
                }
                cout << " ";
            }
            word = strtok(NULL," ");

        }

    }
    return 0;
}
