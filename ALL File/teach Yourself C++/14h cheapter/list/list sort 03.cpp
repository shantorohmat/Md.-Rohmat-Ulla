#include <bits/stdc++.h>
using namespace std;

int fun(int a,int b)
{
    return a>b;
}

int main()
{
    int arr[5] = { 5,7,8,10,2};

    list <int> l(arr,arr+5);

    list <int> :: iterator it;

    it = l.begin();

    while(it != l.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;
    l.sort();

    it = l.begin();

    while(it != l.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    l.reverse();

    it = l.begin();

    while(it != l.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;



    return 0;
}
