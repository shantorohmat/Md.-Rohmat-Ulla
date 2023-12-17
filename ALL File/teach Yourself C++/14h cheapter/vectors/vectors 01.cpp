#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    cout << "initial size : " <<  v.size() << endl;

    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);

    }

    cout << "2nd size : " <<  v.size() <<endl;

    for(int i = 0;i < v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout <<endl;

    for(int i = 0;i < 10;i++)
    {
        v.push_back(i+10);
    }

    cout << "3rd size : " << v.size()  << endl;

    for(int i = 0;i < v.size();i++)
    {
        cout << v[i]<< " ";
    }
    cout << endl;

    cout << "size : " << v.size() << endl;

    for(int i = 0;i < v.size();i++)
    {

        v[i] = v[i]+ v[i];

    }
    for(int i = 0;i < v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;




}
