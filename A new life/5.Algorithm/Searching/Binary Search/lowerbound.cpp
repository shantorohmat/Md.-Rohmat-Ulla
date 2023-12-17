#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int>v;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Which number do you want to find?" << endl;
    int key;
    cin >> key;
    int low = 0, high = n-1;

    while(low+1 < high )
    {
        int mid = (low + high)/2;
        if(v[mid] < key)
        {
            low = mid;
        }
        else high = mid;
    }

    cout << high << " ";

    cout << lower_bound(v.begin(),v.end(),key) - v.begin() << endl;
}