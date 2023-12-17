#include <iostream>
using namespace std;
int check(int n,int i)
{
    
    if(n & 1 << i)
    return true;
    else return false;
    
}
int main()
{
    //Check if the ith bit is set in the binary form of the given number.
    
    while(1){
    int n;
    cin >> n;
    int i;
    cin >> i;
    // cout << check(n,i) << endl;
    // bit number start with one that's why i - 1
    if(check(n,i-1))
    cout << i << "th bit is one" << endl;
    else cout << i << "th bit is zero" << endl;
    }
}