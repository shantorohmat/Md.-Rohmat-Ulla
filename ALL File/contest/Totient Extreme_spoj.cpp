///O(Nlogn(logn))
#include <iostream>
using namespace std;
int phi[1000001];
#define maxN 1000001
int  init(int n)
{
    for(int i = 0;i <= maxN;i++)
        phi[i] = i;
    for(int i = 2;i <= maxN;i++)
    {
        if(phi[i] == i)
        {
            for(int j = i ;j <= maxN;j+=i)
            {
                phi[j]/=i;
                phi[j]*=(i-1);
            }
        }
    }
    return phi[n];
}

int main()
{

    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;

       int H=0;
    for(int i=1; i<=n; i++) {
    H += phi[i];
}
    for(int i=1; i<=n; i++) {
    H += phi[i];
}

        cout <<H << endl;
    }

}
