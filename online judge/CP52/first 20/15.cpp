///cp52 book 12 no
#include <iostream>
using namespace std;
void zero(int n,int c);

int top ;
int two,five;
int main()
{
    int t,n;

    cin >> t;

    while(t--)
    {
        top = t;
        cin >> n;
        zero(n,top);
    }
    return 0;
}

void zero(int a,int toop)
{

    if(toop == top) { two = 0;five = 0; }
    if(toop < 0) toop = 0;
    int n = a;



    int c2 = 0,c5 = 0;



    while(1){

        if(n % 2 == 0)
        {
            c2++;
            n = n / 2;

        }
        else if(n % 5 == 0)
        {
            c5++;
            n = n / 5;
        }

        else break;
    }

    two = c2 + two;
    five = c5 + five;


    if(a == 1)
    {
        if(two > five)
            cout << five << endl;
        else if(two < five)
            cout << two << endl;
        return ;
    }
        return zero(a - 1,toop-1);
}
