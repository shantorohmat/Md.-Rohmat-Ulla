#include<iostream>
using namespace std;
void date(char *date);
void date(int day, int month, int year);

int main()
{
    date("19/12/2019");
    date(19,12,2019);
    return 0;
}

void date(char *date)
{
    cout << "Date : " << date << endl;
}
void date(int day,int month,int year)
{
    cout << "Date : " << day << "/"<< month  << "/" <<year <<endl;
}
