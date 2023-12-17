#include <iostream>
#include <string.h>
using namespace std;
int main()
{
 string s;
 while(getline(cin,s)) {

  for(int i = 0; s[i]; i++){

   cout << s[i] - 7;
  }
  cout << " ";

 }
    return 0;
}
