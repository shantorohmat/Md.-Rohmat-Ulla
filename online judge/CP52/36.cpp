#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n,i;

        cin  >> n;

        string *s = new string [n];

        string temp;

        for(int i = 0;i < n;i++)
        {
            cin >> s[i];
        }

        cout << endl;

    int j = 0;
	bool swap = true;

	while (swap)
	{
		swap = false;
		j++;
		for (int l = 0; l < n - j; l++)
		{
			if (s[l] > s[l + 1])
			{
				temp = s[l];
				s[l] = s[l + 1];
				s  [l + 1] = temp;
				swap = true;
			}
		}
	}
        for(int i = 0;i < n;i++)
        {
            cout <<  s[i] << endl;
        }
        delete [] s;

    }
    return 0;
}
