#include <iostream>
using namespace std;
#define ll long long int
int fib(int n)
{
    if(n > 1)
    return n*fib(n-1);
    else return 1;
}
int main()
{
   int n,res= 1;
   cin >> n;
   char s[1000];
   for(int i = 0;i < n;i++)
    {
        cin >> s[i];
      res *=   fib(s[i]-'0');

    }
    int r = fib(res);
    cout << r << endl;




}

