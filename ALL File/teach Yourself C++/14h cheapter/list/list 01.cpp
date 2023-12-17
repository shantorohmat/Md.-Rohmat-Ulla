#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<char> l;
    for(int i = 0; i < 10;i++)
    {
        l.push_back('A'+  i);
    }

    list<char> :: iterator it;

    while(!l.empty())
    {
        it = l.begin();
        cout << *it << " ";
        l.pop_front();
    }
}
