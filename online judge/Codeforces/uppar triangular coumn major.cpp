#include<iostream>
using namespace std;

void set(int A[],int i,int j,int x)
{
    if(i <= j)
    {
       A[(j*(j-1))/2 + (i - 1)] = x;
    }
}

int get(int A[],int i,int j)
{
    if(i <= j)
    {
        return A[(j*(j-1))/2 + (i - 1)];
    }
    else return 0;
}
int main()
{
    cout << "Enter mxm matrix : ";

    int m,n[100];cin >> m;

    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(i <= j)
            {
                set(n,i,j,1+i+j);
            }
        }
    }

    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {

                cout << get(n,i,j) << " ";



        }
        cout <<endl;
    }
}

