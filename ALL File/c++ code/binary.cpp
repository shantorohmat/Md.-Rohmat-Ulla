//binary to decimal
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

int main()
{
        while(1){

    int i,sum = 0,power,len;

    char s1[100];


    cout << "Give a Binary Number :  " ;

    cin >> s1;

    len = strlen(s1);

    power = len - 1;

    for(i = 0; i < len;i++)
    {
        sum += (s1[i] - '0') * pow(2,power);
        power--;
    }

    cout << sum << endl;
    }

    return 0;
}
