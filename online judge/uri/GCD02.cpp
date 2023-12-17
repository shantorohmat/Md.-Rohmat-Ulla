#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int *p = new int [n];

    for(int i = 0;i < n;i++)
    {
        cin >> p[i];

    }

    for(int i = 0;i < n;i++)///8 5 4 6
    {
        for(int j = 0;j < n-i-1;j++)
        {
            if(p[j] > p[j+1])
            {
                int temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }

        }
    }
    /*for(int i = 0;i < n;i++)
    {
        cout << p[i] << " ";

    }
    cout << endl;*/


    int sml = p[0],count = 0;

    for(int i = 1;i < n;)
    {
        if(p[i]% sml== 0)
        {
            count = sml;
            i++;
        }

        else
        {
            sml--;
            i == 1;
        }
    }
    cout <<count <<  endl;

    return 0;
}
