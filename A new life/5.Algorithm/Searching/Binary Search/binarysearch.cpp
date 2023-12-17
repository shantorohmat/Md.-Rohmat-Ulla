#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[10000];
int ite = 0;
//upper bound
// key = up
// low = up 
int binarySearch(int low,int high,int key)
{
    //time complexity : log2(N)
    int mid ;
    while(low <= high)
    {
        ite++;
        mid = floor((low + high)/2);
        if(key == a[mid])
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            high = mid - 1;
        }
        else if(a[mid]<key)
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    

    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    cout << "Which number do you want to find" << endl;;
    int key ;
    cin >> key;
    int index = binarySearch(0,n-1,key);
    cout << "Index : " << index+1 << endl;
    cout << "value : " << key << endl;
    cout << "iteration : " << ite << endl;
    
}

