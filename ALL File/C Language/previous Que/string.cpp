#include <iostream>
using namespace std;
void ArrayCopy(int x[], int y[], int n)
{
    for(int i = 0; i < n;i++)
    {
       y[i] = x[i];
    }



}
int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    int *brr = new int [n];
    for(int i = 0;i < n;i++)cin >> arr[i];
    for(int i = 0;i < n;i++) cin >> brr[i];
    ArrayCopy(arr, brr,  n);
      for(int i = 0;i < n;i++)
    {
        cout << brr[i] << " ";

    }
}
