#include<iostream>
using namespace std;
int main()
{
    int t,n=0,i,n1 = 0,c;
    while(cin >> t)
    {

        for(i = 0;i < t;i++)
        {
            cin >> c;
            if(c == 1)
            {
                n1 ++;
            }
            else if(c == 0)
            {
                n++;
            }
        }
         if(n1 > 0)
            cout << "HARD" << endl;
         else
            cout << "EASY" <<endl;
            n1 = 0,n = 0;
    }
    return 0;
}
