#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];

    for(int i = 0,s = 1;i < 5;i++,s++)
    {
        int k = s;
        for(int j = 0;j < 5;j++,k++)
        {
            int x = 0;
            if(k > 5)
            {
                 x = k - 5;

            }

            cout <<  k - (2*x)<< " ";

        }
        cout << endl;
    }
}
