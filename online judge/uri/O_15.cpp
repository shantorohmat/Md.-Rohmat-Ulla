#include <iostream>
using  namespace std;

int main()
{

    long long int first = 0,second = 1,n,count = 0;

    char fibo[100000];




    for(int i = 1;i < 50;i++)
    {
        if(i <= 1)
        {
            fibo[i] = i;
        }
        else
        {
            fibo[i] = first + second;

            first = second;

            second = fibo[i];

        }

        cout << fibo[i] << " " << i << endl;
        count++;


    }
    cout << endl;

    cout << count << endl;

}
