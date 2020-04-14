#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define MOD 1000000007
#define endl '\n';


void solve()
{
    ll n,m;
    ll x=0,y=0;
    cin>>n>>m;
    ll arr[n], brr[m];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        if(arr[x]<arr[i]){
            x = i;
        }
    }
    for(ll i=0; i<m; i++){
        cin>>brr[i];
        if(brr[y]>brr[i]){
            y = i;
        }
    }
    for(ll i=0; i<m; i++){
        cout<<x<<" "<<i<<endl;
    }
    for(ll i=0; i<n; i++){
        if(i!=x){
            cout<<i<<" "<<y<<endl;
        }
    }

}


int main()
{
	fast
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
}
