#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    string s3 = s1+s2;
    string s4 = s3;

     reverse(s3.begin(),s3.end());
     if(s3 == s4) cout << ":)" << endl;
     else cout << ":(" << endl;

}
