#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n,num = 0,num_r = 0,num_s = 0,num_c = 0;

    cin >> n;

    map <char,int> m;

    map <char,int> :: iterator it;

    int a;

    char ch ;

    for(int i = 0;i < n;i++)
    {

        cin >> a >> ch;
        m.insert(make_pair(ch,a));
        num = num + a;

    }
    for(it = m.begin();it != m.end();it++)
    {
        if(it->first == 'C')
        {
            num_c = num_c + it->second;
            cout << endl << num_c << endl;
        }

    }

     for(it = m.begin();it != m.end();it++)
    {

        if(it -> first == 'R')
        {
            num_r = num_r + it->second;
            cout <<  num_r << endl;

        }

    }

     for(it = m.begin();it != m.end();it++)
    {

        if(it->first == 'S')
        {
            num_s = num_s + it->second;
            cout <<  num_s << endl;
        }
    }

     for(it = m.begin();it != m.end();it++)
    {
       cout << it->first << " " << it-> second << endl;
    }


    cout << num_c << " "<< num_r << " " << num_s << " " << num << endl;


}
