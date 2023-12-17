#include<iostream>
#include<cstring>
using namespace std;

int main()
{
   char s1[] = "BANG";
   char s2[] = "LADESH";
   char s3[100];

   int len_1 = strlen(s1);
   int len_2 = strlen(s2);
   int len = strlen(s1) + strlen(s2);

   cout << len << endl;

   for(int i = 0,j = 0; i < len_1;i++,j++ ) { s3[j] = s1[i];}

   for(int i = 0,j =len_1;i < len_2;i++,j++ ){ s3[j] = s2[i]; }

   for(int i = 0;i < (len_1 + len_2);i++){  cout << s3[i] << endl;}

}
