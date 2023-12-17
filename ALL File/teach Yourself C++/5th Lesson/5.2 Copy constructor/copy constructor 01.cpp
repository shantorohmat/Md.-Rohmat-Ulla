#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

class shanto
{
    int *p;
    int size;

public:

    shanto(int s);

    shanto(const shanto &a);

    int get(int i);

    void put(int i,int j);

    ~shanto() { delete []p;}

};

inline shanto :: shanto(int s)
{
    p = new int [s];

    if(!p) exit(1);

    size = s;

    cout  << "Using Normal constructor :  " << endl;
}
inline shanto :: shanto(const shanto &a)
{
    size = a.size;//

    p = new  int [a.size];

    if(!p) exit(1);

    for(int i = 0;i < a.size;i++)
    {
        p[i] = a.p[i];
    }

    cout << "Using copy constructor : " << endl;


}
inline int shanto :: get(int i)
{
    return p[i];
}
inline void shanto :: put(int i,int j)
{
    if(i >= 0  && i < 10)
    {
        p[i] = j;
    }
}

int main()
{
    shanto ob(10);

    for(int i = 0;i < 10;i++)
    {
        ob.put(i,i);
    }
    for(int i = 0;i < 10;i++)
    {
        cout << ob.get(i) << "\t";
    }
    cout << endl;

    shanto x = ob;

    for(int i = 9;i >= 0;i--)
    {
        cout << x.get(i) << "\t" ;
    }
    cout << endl;

    return 0;
}
