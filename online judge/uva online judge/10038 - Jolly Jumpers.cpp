#include<bits/stdc++.h>
using namespace std;

int main(){

    int ar[3003],ar2[3003],n;

    while(cin >> n){

        for(int i = 0; i < n; i++)cin >> ar[i];

        int k = 1;

        for(int i = 1; i < n;i++){

            ar2[k++] = abs(ar[i]-ar[i-1]);
        }

        sort(ar2+1,ar2+k);

        bool b = true;
        for(int i = 1; i < k; i++){
            if(ar2[i] != i){
                b = false;
                break;
            }
        }
        if(b)cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }
    return 0;
}
