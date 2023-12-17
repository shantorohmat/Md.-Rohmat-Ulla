#include <iostream>
using namespace std;

int main()
{
    while(1){
    int x,y,sum = 0;

    cin >> x >> y ;

    for(int i = y+1; i < x;i++)
    {
        if(i % 2 != 0)
        {
            sum = sum + i;
        }
    }

    cout << sum << endl;
    }
    return 0;
}
