#include <iostream>
using namespace std;

int main()
{

    int n,max = 0,col;

    for(int i = 1;i <= 100;i++)
    {
        cin >> n;

        if(max < n)
        {
            max = n;

            col = i;
        }
    }

    cout << max << endl;

    cout << col << endl;

    return 0;
}
