
#include <stdio.h>
#include <bits/stdc++.h>
 
using namespace std;
int ite = 0;
int RbinarySearch(int a[], int low, int high, int key)
{
  
    if (low > high) 
        return -1;
    
 
    ite++;
    int mid = (low + high)/2;    
 
    
    if (key == a[mid]) 
        return mid;
    
 
    
    else if (key < a[mid]) 
        return RbinarySearch(a, low, mid - 1, key);
    
 
    
    else 
        return RbinarySearch(a, mid + 1, high, key);
    
}
 
int main(void)
{
    int n;
    cin >> n;
    int *a = new int[n];

    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    cout << "Which number do you want to find" << endl;;
    int key ;
    cin >> key;
    int index = RbinarySearch(a, 0, n-1, key);
 
    cout << "Index : " << index+1 << endl;
    cout << "value : " << key << endl;
    cout << "iteration : " << ite << endl;
    return 0;
}
