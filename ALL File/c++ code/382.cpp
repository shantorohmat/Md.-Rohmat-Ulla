#include<iostream>

using namespace std;

int main()
{
    int n,s,x,i;

    cout << "PERFECTION OUTPUT" << endl;

    while(1)
    {
       cin >> n;

        int s = 0;

        if(n == 0)
        {
            break;
        }

        for(i = 1;i <= n/2;i++)
        {
             if(n % i == 0)
             {

                 s = i + s;
             }

        }

        if(n == s)
        {
            cout.width(5);

           cout << n ;

           cout <<"  PERFECT"<<endl;
         }
        else if( n > s)
        {
            cout.width(5);

             cout << n;

             cout <<"  DEFICIENT"<<endl;
        }
        else if(n < s)
        {
            cout.width(5);

             cout <<n;

             cout << "  ABUNDANT"<<endl;
        }

    }
    cout << "END OF OUTPUT" << endl;
    return 0;
}
