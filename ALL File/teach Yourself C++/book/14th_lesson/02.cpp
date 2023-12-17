#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<char>lst;

    for(int i = 0; i < 10;i++)
    {
        lst.push_back('A'+ i);
    }
    cout << "Size : " << lst.size() << endl;

    /*list <char>::iterator p ;

    cout << "Contents : " ;

    while(!lst.empty())
    {
        p = lst.begin();
        cout << *p ;
        lst.pop_front();
    }
    cout << endl << endl;*/
    list <char>::iterator p ;

    for(p = lst.begin();p != lst.end();p++)
    {
        cout << *p << "\t";
    }


        return 0;

}
