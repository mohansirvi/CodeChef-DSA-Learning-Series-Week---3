
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define MOD 1000000007
#define endl '\n';


void solve()
{
		ll n,z;
		cin>>z>>n;
		
		priority_queue<ll>pq;
		ll sum=0;
		for(ll i=0;i<z;i++)
		{
			ll x;
			cin>>x;
			pq.push(x);
			sum+=x;
		}
		
		ll ct=0;
		while(n>0&&sum!=0)
		{
	        ll y;
	        y=pq.top();
		    n-=y;
		    
			sum=sum-y+y/2;
		
			pq.pop();
			pq.push(y/2);
			
			ct++;
		}
		if(n>0)
		{
			cout<<"Evacuate\n";
		}
		if(n==0||n<0)
		{
			cout<<ct<<"\n";
		}
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fast
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}
