 #include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v(5,1);

    cout << "2nd size : " << v.size() << endl;

    for(int i = 0 ;i < v.size();i++)
    {
        cout << v[i] <<"  " ;
    }

    cout << endl;

    vector<int>:: iterator it =  v.begin();

    it = it + 2;
    v.insert(it,10,9);

    cout << "After the insert : " << v.size() << endl;

    for(int i = 0 ;i < v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    it = v.begin();
    it= it+ 2;
    v.erase(it,it+10);

    cout << " size : " << v.size() << endl;

    for(int i = 0 ;i < v.size();i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl;

    return 0;
}
