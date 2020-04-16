#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define MOD 1000000007
#define endl '\n';


void solve()
{
		int n,m;
	    cin>>n>>m;
	    map<string,vector<string>> mp;
	    map<string,int> mp1;
	    for(int i=0;i<n;i++){
	        string name,country;
	        cin>>name>>country;
	        mp[country].push_back(name);
	    }
	    for(int i=0;i<m;i++){
	        string name;
	        cin>>name;
	        mp1[name]++;
	    }
	    string res="";
	    int maxi=0;
	    int len=0;
	    for(auto i:mp){
	        len=0;
	        for(auto j:i.second){
	            len+=mp1[j];
	        }
	        if(len>maxi){
	            maxi=len;
	            res=i.first;
	        }
	    }
	    string chef;
	    int maxii=0;
	    for(auto i:mp1){
	        if(i.second>maxii){
	            maxii=i.second;
	            chef=i.first;
	        }
	    }
	    cout<<res<<endl;
	    cout<<chef<<endl;
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fast
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
}
