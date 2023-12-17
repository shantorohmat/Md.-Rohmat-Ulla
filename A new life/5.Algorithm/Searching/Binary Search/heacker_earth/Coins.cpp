#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

    ios_base::sync_with_stdio(0);

    cin.tie(0);

    int n,k = 0;cin>>n;

    int A[n],B[n];

    for(int i = 0; i<n; i++)cin>>A[i];

    sort(A,A+n);

    for(int i = 0; i<n; i++)B[i] = A[i];

    for(int i = 0; i<n; i++)B[i+1]+=B[i];

    for(int key = 1; key<=100000; key++){

        ll sum_l = 0,sum_r = 0;

        ll x = lower_bound(A,A+n,key)-A;

        ll y = upper_bound(A,A+n,key)-A;

        sum_l = B[x];

        sum_r = B[n-1]-B[y];
       

        if(sum_l==sum_r){
           
            k = 1;

            break;

        }

    }

    if(k==0)cout<<"NO"<<endl;

    else cout<<"YES"<<endl;

    return 0;

}