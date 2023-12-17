#include <iostream>
using namespace std;

int main()
{


    while(1){

    int m,n,s,l,sum = 0;

    cin >> m >> n;

    if(m <= 0 || n <= 0) {break; }

    if(m < n)
    {
        s = m;
        l = n;
    }
    else
    {
        s = n;
        l = m;
    }

    for(int i = s;i <= l;i++)
    {
        cout << i << " ";
        sum = i + sum;

    }
    cout << "Sum=" << sum << endl;
    }

    return 0;
}
