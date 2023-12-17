#include <iostream>
using namespace std;
int main()
{
    int t,a,b,c = 0;
    cin >> t;
    int *home = new int[t];
    int *away = new int[t];
    for(int i = 1;i <= t;i++)
    {
        cin >> a >> b;
        home[i] = a;
        away[i] = b;
    }
    for(int i = 1;i <= t;i++)
    {
        for(int j = 1;j <= t;j++)
        {
            if(home[i] == away[j])
            {
                c++;
            }
        }
    }
    cout << c << endl;
}
