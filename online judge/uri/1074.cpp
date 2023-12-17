#include <iostream>
using namespace std;

int main()
{
    int x,s;

    cin >> x;

    for(int i = 0 ; i < x;i++)
    {
        cin >> s;

        if(s == 0) cout << "NULL" << endl;

        else if(s % 2 == 0)
        {
            if(0 < s)
            {
                cout << "EVEN POSITIVE" << endl;
            }
            else cout << "EVEN NEGATIVE" << endl;
        }
        else if(s % 2 != 0)
        {
            if(0 < s)
            {
                cout << "ODD POSITIVE" << endl;
            }
            else cout << "ODD NEGATIVE" << endl;
        }
    }
    return 0;
}
