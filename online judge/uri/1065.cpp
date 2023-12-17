#include <iostream>
using namespace std;

int main()
{
    int s[5];

    int count = 0;

    for(int i = 0;i < 5;i++)
    {
        cin >> s[i];
    }

    for(int i = 0;i < 5;i++)
    {
        if(s[i] % 2 == 0)
        {
            count ++;
        }
    }

    cout << count << " valores pares" << endl;

    return 0;
}
