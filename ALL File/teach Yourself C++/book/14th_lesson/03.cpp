#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <char> lst;
    list <char> revlst;
     for(int i = 0; i < 10;i++)
    {
        lst.push_back('A'+ i);
    }

    cout << "Size : " << lst.size() << endl;

    cout << "Original contents : ";

    list <char> :: iterator p;

    while(!lst.empty())
    {
        p = lst.begin();

        cout << *p  <<" \t";

        lst.pop_front();

        revlst.push_front(*p);
    }
    cout << endl << endl;

    cout << "Size of revlst : " << endl;

    cout << revlst.size() << endl;

    p = revlst.begin();

    while(p != revlst.end())
    {
        cout << *p << "\t" ;
        p++;
    }

    return 0;


}
