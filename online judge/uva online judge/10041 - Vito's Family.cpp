#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,r,i,j,mn;
    cin>>t;
    while(t--){
        cin>>r;
        int a[r],ans=0,x;
        mn=1000000000;
        for(i=0;i<r;i++){
            cin>>a[i];
        }
        sort(a,a+r);
        x=a[r/2];
        for(i=0;i<r;i++){
            ans+=abs(x-a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
