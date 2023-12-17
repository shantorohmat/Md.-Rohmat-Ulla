#include <iostream>
using namespace std;

int main()
{
    int n,t;

    cin >> t;



    for(int c = 1;c <= t;c++){

        cin >> n;

        cout<< "Case "<< c << ":";

    for(int i = 1;i <= n;i++)
    {
        if(n % i == 0)
            cout<< " " << i ;

    }

    cout << endl;
    }

    return 0;
}
