#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    vector <int>:: iterator it;


    cout  << "Size : "  << v.size() << endl << endl;

    for(int i = 0,m = 10; i < 10;i++,m = m + 13)
    {
        v.push_back(m);
    }
    cout << "Size : " <<v.size() <<endl;

    for(int i = 0;i < v.size();i++)
    {
        cout << v[i] << '\t';
    }
    cout << endl << endl;

    for(int i = 0,m = 50;i < 10;i++,m = m + 10)
    {
        v.push_back(m);
    }
    cout << "size : " << v.size() << endl<< endl;

    for(int i = 0;i < v.size();i++)
    {
        cout << v[i] << '\t';
    }
    cout << endl << endl;

    for(int i = 0;i < v.size();i++)
    {
        v[i] = v[i] + v[i];
    }
    for(it = v.begin();it != v.end();it++)
    {
        cout << *it << '\t' ;
    }
    cout << endl << endl;

    vector <int> sp(5,4);

    for(int i =0;i < sp.size();i++)
    {
        cout << sp[i] << "\t";
    }
    cout << endl << endl;

    cout << sp.size() << endl << endl;

    vector <int> :: iterator it2 = sp.begin();

    it2 = it2 + 2;

    sp.insert(it2,10,9);

    cout << "size after insert : " << sp.size() << endl;

    for(int i =0;i < sp.size();i++)
    {
        cout << sp[i] << "\t";
    }
    cout << endl << endl;

    it2 = sp.begin();
    //it2 += 2;

    sp.erase(it2,it2 + 5);

    cout << "size after erase : " << sp.size() << endl << endl;

    for(int i = 0;i < sp.size();i++)
    {
        cout << sp[i] << "\t";
    }
    cout << endl << endl;


    return 0;

}
