#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#define ll long long int
using namespace std;


int main() {
    set<ll>s;
    set<ll> :: iterator it;
    ll q;

    cin >> q;

    while(q--)
    {
        ll y,x;
        cin >> y >> x;

        if(y == 1)
        {
            s.insert(x);
        }
        else if(y == 2)
        {

                s.erase(x);
        }
        else if(y == 3)
        {
                if(s.end()==s.find(x))
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;


        }
    }
    return 0;
}




