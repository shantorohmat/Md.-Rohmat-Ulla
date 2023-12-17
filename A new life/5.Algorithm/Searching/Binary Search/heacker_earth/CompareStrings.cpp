
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define MAX6 1000005


ll arr[MAX6];
ll when[MAX6];
string a,b;
ll func(ll x){
    string c = b;
    for(ll i = 0; i <= x; i++){
        c[arr[i]] = '1';
    }
    if(c >= a) return 1;
    return 0;
}
int main(){
    ll n,q;
   
    cin >> n >> q;
    cin >> a;
    cin >> b;
    ll sum = 0;
    for(ll i = 0; i < q; i++){
        cin >> arr[i];
        arr[i]--;
    }
    ll low = 0;
    ll high = q-1;
    ll ans = INT_MAX;
    while(low <= high){
        ll mid = (low + high)/2;
       // cout << low << " " << high << " " << mid << " " << func(mid) << endl;
        if(func(mid)){
            high = mid-1;
            ans = min(ans,mid);
        }
        else{
            low = mid + 1;
        }
    }
    //cout << ans << endl;
    for(ll i = 0; i < n; i++){
        if(i < ans) printf("NO\n");
        else  printf("YES\n");
    }
}