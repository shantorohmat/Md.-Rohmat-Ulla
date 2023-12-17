#include <bits/stdc++.h>
#include <conio.h>
#include <cstdio>
using namespace std;

class date
{
    int day,month,year;

public:

    date(char *str);

    date(int day,int month,int year);

    void show();

};
date :: date(char *str)
{
    sscanf(str,"%d%*c%d%*c%d",&day,&month,&year);

}

date :: date(int day,int month,int year)
{
    this -> day = day;

    this -> month = month;

    this -> year = year;
}

void date :: show()
{
    cout << day<< "/" << month << "/" << year << endl;
}
int main()
{
    date ob("01/01/2021");

    date on(01,01,2021);

    ob.show() ;
    on.show();

    getch();

}
