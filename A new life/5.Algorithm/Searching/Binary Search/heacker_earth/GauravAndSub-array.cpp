#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 1000005;
int sum[N];
int arr[N];
int a[N];
int count_one(int n)
{
	int cnt = 0;
	while(n )
	{
		n = n & (n-1);
		cnt++;
	}
	return cnt;
}
bool check(int n,int x,int k)
{
	for(int i=0;i<=n-x;i++)
	{
		if((sum[i+x]-sum[i])>=k)
		{
			return true;
		}
	}
	return false;
}
void pre_compute()
{

	for(int i=0;i<N;i++)
	{
		arr[i]=count_one(i);
	}

	
}
int main()
{
	pre_compute(); 
	int n,q;
	cin >> n >> q;
	
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	sum [0] = 0;
	for(int i = 1;i <= n;i++)
	{
		sum[i] = sum[i-1] + arr[a[i]];
	}


	

	while(q--)
	{
		int x;
		cin >> x;

		int low = 1;
		int high = n;
		int ans = -1;

		while(high - low >= 0)
		{
			int mid = (high + low)/2;
			if(check(n,mid,x))
			{
				ans = mid;
				high = mid - 1;
			}
			else{
				low = mid + 1;
			}
		}
		cout << ans << endl;
	}

}