#include<bits/stdc++.h>
using namespace std;
class card
{
    string books_title;
    string author;
    int no_of_book;
public:
    void store(string books_title,string author,int no_of_book)
    {
        this -> books_title = books_title;
        this -> author = author;
        this -> no_of_book = no_of_book;

    }
    void show()
    {
        cout << books_title << endl << author << endl << no_of_book << endl;
    }
};
int main()
{
    card  sp;
    sp.store("cse","DR.Shanto",1);
    sp.show();
}
