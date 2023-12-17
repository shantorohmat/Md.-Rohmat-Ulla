#include <iostream>
using namespace std;

int main()
{
    int t;
    int count = 0;

    cin >>  t;

    while(t--)

    {
        int n1,n2,n3,first,second,third;

       while(cin >> n1 >> n2 >> n3)
       {
           count ++;

       if(n1 < n2)
       {
           if(n1 < n3)
           {
               first = n1;
               if(n2 < n3)
           {
               second = n2;
               third = n3;
           }
           else
           {
               second = n3;
               third = n2;
           }
           }
           else{
            first = n3;
            second =  n1;
            third = n2;
           }

       }
       else
       {
           if(n2 < n3)
           {
               first = n2;
               if(n3 < n1)
           {
               second =  n3;
               third = n1;
           }
           else
           {
               second = n1;
               third = n3;
           }
           }
           else
           {
               first = n3;
               second = n2;
               third = n1;
           }


       }
       //for()

      cout << "Case" << " " << count << ": " << first << " " << second << " " << third << endl;
       }

    }

    return 0;
}
