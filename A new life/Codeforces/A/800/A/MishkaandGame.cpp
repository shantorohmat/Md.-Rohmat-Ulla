#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int mi = 0,mc = 0;
    while(t--)
    {
        int m,c;
        cin >> m >> c;
        if(m>c)mi++;
        else if(m<c) mc++;
    }
    if(mi>mc)cout << "Mishka" << endl;
    else if(mi<mc) cout << "Chris" << endl;
    else if(mi == mc) cout << "Friendship is magic!^^" << endl;
}