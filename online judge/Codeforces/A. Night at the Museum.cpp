#include <iostream>
#include <string>
#include <cstring>
#include <math.h>
using namespace std;
int main()
{
    char s[202];
    cin >> s;
    int index = 0;
    int start = 0;
    int moves = 0;
    int k = 0;
    int sum = 0;
    for(int i = 0;i < strlen(s);i++)
    {
        index = s[i] - 97;

        moves = abs(start - index);

        if(moves < 13)
        {
            sum += moves;
        }
        else {
            sum  += 26 - moves;
        }


        start = index;


    }
    cout << sum << endl;
}
