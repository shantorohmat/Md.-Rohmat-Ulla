#include<iostream>
using namespace std;

int main()

{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;

        int first_dev,last_dev,r;

        int dev = n % 10;

        first_dev = n;

        while(first_dev != 0)
        {

          last_dev = first_dev % 10;
          first_dev = first_dev / 10;
        }

        r = dev + last_dev;

            cout << "Sum = " << r << endl;

    }
    return 0;
}
