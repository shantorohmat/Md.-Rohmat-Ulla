#include <iostream>
using namespace std;

int main()
{
    double s[6];

    int count = 0;

    for(int i = 0;i < 6;i++)
    {
        cin >> s[i];

    }

    for(int i = 0;i < 6;i++)
    {
        if(0 < s[i])
        {
            count ++;
        }
    }

    cout << count << " valores positivos"<< endl;

    return 0;
}
