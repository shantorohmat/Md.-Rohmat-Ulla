#include<iostream>
#include<cstring>
using namespace std;
int string_compare(char s1[],char s2[]);

int string_length(char s1[])
{
    int i= 0;
    while( s1[i] != '\0')
    {
        i++;
    }
    return i;

}
int main()
{
    char s1[100],s2[100];

    cout << "Give me two line or world : " << endl;

    cin >> s1;

    cin >> s2;

    int number ;

    number = string_compare(s1,s2);

    if(number == -1) { cout << s1 << " is smaller than " << s2 << endl;}

    if(number == 0) { cout << s1 << " is same in size with " << s2 << endl;}

    if(number == 1) { cout << s1 << " is bigger than " << s2 << endl;}

}
int string_compare(char s1[],char s2[])
{
    for(int i = 0; s1[i] != '\0' && s2[i] != '\0';i++)
    {
        if(s1[i] <  s2[i]) { return -1; }

        if( s1[i] >  s2[i]) { return 1; }

        if( s1[i] ==  s2[i]) { return 0; }
    }
    if(string_length(s1) < string_length(s2)) { return -1; }

    if(string_length(s1) > string_length(s2)) { return 1; }

    if(string_length(s1) == string_length(s2)) { return 0; }
}
