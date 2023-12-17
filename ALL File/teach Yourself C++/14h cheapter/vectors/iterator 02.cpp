#include <bits/stdc++.h>
//#include <vector>
using namespace std;

bool fun(int a,int b)
{
    return a > b;
}
int main()
{
    vector<int> v;

    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }

    vector<int>:: iterator it = v.begin();






    sort(v.begin(),v.end(),fun);

    while(it != v.end())
    {
        cout  << *it << " ";
        it++;
    }


    return 0;

}
