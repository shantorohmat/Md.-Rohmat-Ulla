#include <iostream>
#include <cstdio>
using namespace std;

class date
{
    int day,month,year;
public:
    date(char *str)
    {
        sscanf(str,  "%d%*c%d%*c%d",&day,&month,&year);
    }
    date(int day,int month,int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void show() {cout << day << '/' << month << '/' << year  << endl; }

};
int main()
{
    date idate("12/31/99");

    date date(12,31,99);

    idate.show();
    date.show();

    return 0;
}
