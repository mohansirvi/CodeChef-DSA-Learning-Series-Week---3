#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define MOD 1000000007
#define endl '\n';


void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll x,y;
    ll ans = 0,d;
    set<pair<ll,ll>> set1;
    for(ll i=0;i<k;i++)
    {
        cin>>x>>y;
        set1.insert({x,y});
    }
    for(auto it : set1)
    {
        x = it.first;
        y = it.second;
        d = 4;
        if(set1.find({x,y-1}) != set1.end())
        {
            ans--;
            d--;
        }
        if(set1.find({x-1,y}) != set1.end())
        {
            ans--;
            d--;
        }
        ans += d;
    }
    cout<<ans<<endl;

}


int main()
{
	fast
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}
