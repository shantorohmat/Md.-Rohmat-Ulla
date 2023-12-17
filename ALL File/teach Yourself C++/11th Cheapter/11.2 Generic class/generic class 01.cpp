#include <bits/stdc++.h>
using namespace std;

template <class date_t> class list
{
    data_t date;
    list *next;

public:

    list(date_t d);
    void add (list *node){ node > next = this ; next = 0;}
    list *getnext() { return next; }
    date_t getdate() {return date; }
}

template <class date_t> list<date_t>:: lisr (date_t d)
{
    date = d;
    next = 0;
}
int main()
{
    list <char> start('a');
    list<char> *p,*last;

    int i;

    last = &start;
    for(int i = 0; i < 26;i++)
    {
        p = nnew list <char> ('a' + i);
        p-> add(last);
        last = p;
    }

    p = &start;

    while(p)
    {
        cout << p -> getdate();
        p = p->getnext();
    }
}
