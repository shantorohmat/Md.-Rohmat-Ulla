#include <iostream>
using namespace std;

int eve(int n)
{
    if(n%2 == 0) {return n/2;}
    else if(n%2 == 1) {return ((3*n) + 1); }
}
int main()
{
    int n,m,j,x,y,mix = 0,h = 0;

    cin >> n >> m;

    for(x = n,y = m; x < y;x++){

    for(j = 0;x1 101111111111
    = 1;j++)
    {
        x = eve(x);
    }

    if(j+1>mix) {mix = j+1;}

    h = mix;

    }
    cout << h + 1 << endl;
}
\
