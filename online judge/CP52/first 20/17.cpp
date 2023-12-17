#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        char sp[1004];

        int count = 0;

        scanf(" %[^\n]",sp);

        for(int i = 0;sp[i] != '\0';i++)
        {
            if(sp[i] == 'a' || sp[i] == 'e' || sp[i] == 'i' || sp[i] =='o' || sp[i] == 'u')
            {
                count++;
            }
        }
        cout << "Number of vowels = " << count << endl;

    }

    return 0;
}
