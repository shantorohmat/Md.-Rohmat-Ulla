#include <iostream>
using namespace std;
#define L(i,k) for(int i = 1;i <= k;i++)
#define n 101
int ar[n][n],I[n][n];
void mul(int a[][n],int I[][n],int dim)
{
    int res[dim+1][dim+1];
    L(i,dim)
    {
        L(j,dim)
        {
            res[i][j] = 0;
            L(k,dim)
            {
                res[i][j] += I[i][k] * a[k][j];
            }

        }
    }
    L(i,dim) L(j,dim) I[i][j] = res[i][j];
}
void Power(int a[][n],int dim,int m)
{
    L(i,dim) L(j,dim)
    {
        if(i == j) a[i][j] = 1;
        else a[i][j] = 0;
    }

    L(i,m)
    mul(a,I,dim);

}

void PrintMat(int a[][n],int dim)
{
    L(i,dim)
    {
        L(j,dim)
        cout << a[i][j] << " " ;
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int dim,m;
        cin >> dim >> m;
        L(i,dim) L(j,dim) cin >> ar[i][j];
       // L(i,dim){ L(j,dim){ cout <<  ar[i][j] <<" ";} cout << endl;}
        Power(ar,dim,m);
        PrintMat(ar,dim);





    }

}
