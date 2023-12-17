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



        while(word != NULL)
        {
            if(strlen(word) > 0)
            {
                count++;

            }
            word = strtok(NULL,"?!,.; ");

        }
        cout << "count = " << count << endl;
    }
}
