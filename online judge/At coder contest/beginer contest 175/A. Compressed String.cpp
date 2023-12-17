#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

void gen_compressed_str(string str)
{
    int len = str.length();
    for (int i = 0; i < len; i++) {


        int count = 1;
        while (i < len - 1 && (str[i] == str[i + 1]  || str[i] < str[i+1])) {
            count++;
            i++;
        }

        if (count == 1)
        {
          cout << str[i] << endl;
        }
        else
        {
          cout << str[i] << endl;
        }

    }
}

int main() {

   int n;
   cin >>n;
   while(n--){
        string s;
        cin >> s;
  gen_compressed_str(s);
}
}
