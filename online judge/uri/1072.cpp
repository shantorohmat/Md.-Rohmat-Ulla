#include <iostream>
using namespace std;

int main()
{
    unsigned int x,s,count = 0,c = 0;

    cin >> x;

    for(int i = 0; i < x;i++)
    {
        cin >> s;

        if(s >= 10 && s <= 20)
        {
            count ++;
        }
        else c++;

    }
    cout << count << " in" << endl;

    cout << c << " out" << endl;

    return 0;
}
