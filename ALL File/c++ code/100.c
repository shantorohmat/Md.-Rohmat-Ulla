#include <iostream>
using namespace std;
inline int eve(int n)
{
    if(n == 1) {break; }
    if(n%2 == 0) { return n/2; }

    else return ((3*n) + 1);


}
int main()
{
    int x,y,m,n,h = 0;

    while(1)
    {
        cin >> n >> m;



        for(x = n,y = m;x <= y;x++)
        {
            int j = 0,mix = 0;

            for(;x != 1;j++)
            {
                x = eve(x);
            }

            if(j+1 > mix)
            {
                mix = j+1;
            }
            h = mix;

        }
         cout << h;




    }

    return 0;
}
