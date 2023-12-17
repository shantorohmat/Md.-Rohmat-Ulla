#include <iostream>
#include <vector>
#include <algorithm>
using  namespace std;

int main()
{
    vector<vector<int> > vec( 6 , vector<int> (6));
    //vector <int> v;
    //vector <int>:: iterator it;
    int m[6][6];

    for(int i = 0;i < 5;i++)
        for(int j = 0;j < 5;j++){
        cin >> vec[i][j];
        ///v.push_back(m[i][j]);
        }

    auto it =  find(vec.begin(),vec.end(),1);
   vec.insert(it,100,100);

   cout << *it << endl;
}
