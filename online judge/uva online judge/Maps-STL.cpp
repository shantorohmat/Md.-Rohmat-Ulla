 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int> m;
    map<string,int> :: iterator it;

    int q;

    cin >> q;

    while(q--)
    {
        int n,x;

        cin >> n;

        string y;

        if(n == 1)
        {

            cin >> y >> x;

           // m.insert(make_pair(y,x));
            m[y] += x;
        }
        else if(n == 2)
        {
            cin >> y;
            m.erase(y);
        }
        else
        {
            cin >> y;

            cout << m[y] << endl;   }
    }


    return 0;
}



