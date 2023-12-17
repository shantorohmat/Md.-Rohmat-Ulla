#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,T;
    cin >> T;
    for(int t = 1; t <= T; t++){
        cin >> n;
        int maxs = 0,a;
        for(int i = 0; i < n; i++){
            cin >> a;
            if(a > maxs)maxs = a;
        }
        cout << "Case " << t << ": " << maxs << endl;
    }
    return 0;
}
