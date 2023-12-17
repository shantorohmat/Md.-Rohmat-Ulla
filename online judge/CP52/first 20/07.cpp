#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;
    while(t--){
    char str[1000];
    scanf(" %[^\n]",str);
    char *cursor = str;///pointer indicates 1st element of str
    int count = 0;
    ///cout << str << endl;
    while(cursor !=   str+ strlen(str))
    {
        long int x = strtol(cursor , &cursor,10);/// strtol can ignor whitespace char /// &cursor indicates
                                                   ///end element of str and we can also write NULL
        cout << x << endl;

        count ++;
    }
    cout << count << endl;
    }

    return 0;
}
