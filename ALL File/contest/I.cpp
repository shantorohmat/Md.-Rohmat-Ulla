#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    int f = n+1,x,sum = 0,s = 0,c = 0;
    for(int i = 1;i <= n;i++)
    {
        cin >> x;
        sum += x;
    }
    for(int i = 1;i <= 5;i++)
    {
        s = sum + i;
        if(f == 2)
        {
            if(s%2 == 0)
            {
                c++;

            }

        }
        else
        {
            if(s % f != 1){
                c++;
                }
        }

    }
     cout << c << endl;



}
