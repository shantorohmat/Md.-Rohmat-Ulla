#include <iostream>
using namespace std;
int main (int argc, const char * argv[])
{

    int t, a, b;
    cin>>t;
    while (t--) {
        cin>>a>>b;
        if(a>=b&&a>=0&&b>=0&&((a+b)%2==0))
        {
            int c=(a+b)/2;
            cout<<c<<" "<<a-c<<endl;

        }else{
            cout<<"impossible\n";
        }
    }
    return 0;
}

