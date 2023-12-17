#include<iostream>
using namespace std;

void set(int A[],int i,int j,int x,int m)
{
    if(i >= j)
    {
       A[(i*(i-1))/2 + (j - i)] =x;
     //  A[m*(j-1) - ((j-2)*(j-1))/2 + (i-j)]= x;
    }
}

int get(int A[],int i,int j,int m)
{

        return A[(i*(i-1))/2 + (j - i)];

    /*else if(i >= j)
    {
        return A[m*(j-1) - ((j-2)*(j-1))/2 + (i-j)];
    }*/
}
int main()
{
    cout << "Enter mxm matrix : ";

    int m,n[100];cin >> m;

    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(i >= j)
            {
                set(n,i,j,1+i+j,m);
            }
        }
    }

    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(i < j) swap(i,j);

                cout << get(n,i,j,m) << " ";
        }
        cout <<endl;
    }
}


