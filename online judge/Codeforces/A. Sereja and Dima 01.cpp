#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];

    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }

    int i = 1,j = n,counter = 1;

    int sum1 = 0,sum2 = 0;

    while(i <= j)
    {
       if(a[i] > a[j] && counter = 1)
       {
           sum1 += a[i];
           i++;
           counter = 0;
       }
       else if(a[i] < a[j] && counter = 1)
       {
           sum1 += a[j];
           j--;
           counter = 0;

       }
       else if(a[i] > a[j] && counter = 0)
       {
           sum2 += a[i];
           i++;
           counter = 1;

       }
       else if(a[i] < a[j] && counter = 0)
       {
           sum2 += a[j];
           j--;
           counter = 1;

       }
    }
}
