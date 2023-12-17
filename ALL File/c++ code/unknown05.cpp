#include<iostream>
using namespace std;
int min(int x,int y);
double min(double x,int y);
char min(char x,char y);
int main()
{
    cout << min(40,45)<< endl;
    cout << min(45.45,50.56)<<endl;
    cout << min('c','T')<<endl;
    return 0;
}
int min(int x,int y)
{
    return x<y ? x : y;
}
double min(double x,double y)
{
    return x < y ? x : y;
}
char  min(char x,char y)
{
    return x < y ? x : y;
}
