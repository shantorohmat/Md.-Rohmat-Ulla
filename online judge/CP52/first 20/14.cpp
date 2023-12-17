///cp52 book 12 no demo
#include <iostream>
using namespace std;
void zero(int n);
int main()
{
    int t,n;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(int i = n;i > 0;)
        {
          zero(i);
          i--;
        }


    }
    return 0;
}

void zero(int n)
{
    int c2 = 0,c5 = 0;

    while(1)
    {
        if(n % 2 == 0)
        {
            cout << " g2h" << endl;
            c2++;
            n = n / 2;
        }
        else if(n % 5 == 0)
        {
            cout << " gh" << endl;
            c5++;
            n = n / 5;
        }

        else break;
    }
    if(n == 1)
    {
        if(c2 > c5)
        {
            n = c2 % c5;
            c2 = c2 - n;
            cout << " ghjhj" << endl;
            cout << c2 << endl;

        }
        else if(c5 > c2)
        {
            n = c5 % c2;
            c5 = c5 - n;
            cout << " 5ghjhj" << endl;
            cout << c5 << endl;

        }
    }
    return;


}
