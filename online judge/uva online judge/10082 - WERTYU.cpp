#include <iostream>
#include <algorithm>
using namespace std;



main() {


    string k  = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

    int m = k.size();
    string s;
    while (getline(cin,s)) {
        int n = s.size();
        for (int i=0; i<n; i++)
            if (s[i]==' ') cout << " ";
            else {
                for (int j=0; j<m; j++)
                    if (s[i]==k[j]) {
                        cout <<  k[j-1] ;
                        break;
                    }
            }
        cout << endl;
    }
}
