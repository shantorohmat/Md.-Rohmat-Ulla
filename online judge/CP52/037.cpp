#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        char str[100000];

        scanf(" %[^\n]",str);

        char *carsor = str;

        long long int x;

        while(carsor != strlen(str) + str)
        {

            for(int i = strlen(carsor) - 1;i >= 0;i--) {cout << carsor[i] ; }

            x = strtol(carsor,&carsor,10);

            while(*carsor == ' ' || *carsor ==  ',') carsor++;

            cout << endl;


        }



    }
    return 0;
}

