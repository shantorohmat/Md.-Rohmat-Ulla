#include <iostream>
#include <string>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin >> s;
    int len = s.size();
     ll dc = 0;
    ll base = 1;

   for(int i = len - 1;i >= 0;i--)
   {
       if(s[i] == '1')
       {
          dc = dc + base;
       }
        base =base * 2;

   }
   cout << dc << endl;
}

