#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[30] = {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2} ;
        int sum = 0;
        while(n--)
        {
            
            char s;
            cin >> s;
            int ax = s - 'A';
            //cout << a[ax] << endl;
            sum += a[ax];
            a[ax] = 1;


        }
        cout << sum << endl;
    }
}