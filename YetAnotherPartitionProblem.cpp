#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define MOD ((int)1e9)
#define mod 998244353
#define endl '\n';


void solve()
{
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    for(ll i=0;i<n;++i){
        cin>>arr[i];
    }
    set<ll> st;
    st.insert(0);
    for(int i=1;i<n;++i){
        if(arr[i]%arr[i-1]!=0){
            st.insert(i);
        }
    }
    while(q--){
        ll ai;
        cin>>ai;
        if(ai==1){
            ll ind, x;
            cin>>ind>>x;
            --ind;
            if(ind==0){
                if(n>1){
                    if(arr[1]%arr[0]!=0 && arr[1]%x==0){
                        st.erase(1);
                    }
                    else if(arr[1]%x!=0 && arr[1]%arr[0]==0){
                        st.insert(1);
                    }
                    
                }
            }
            else if(ind==n-1){
                if(n>1){
                    if(arr[n-1]%arr[n-2]!=0 && x%arr[n-2]==0){
                        st.erase(n - 1);
                    }
                    else if(arr[n-1]%arr[n-2]==0 && x%arr[n-2]!=0){
                        st.insert(n-1);  
                    }
                }
            }
            else{
                if(arr[ind]%arr[ind-1]!=0 && x%arr[ind-1]==0){
                    st.erase(ind);
                }
                else if(arr[ind]%arr[ind-1]==0 && x%arr[ind-1]!=0){
                    st.insert(ind);
                    
                }
                if(arr[ind+1]%arr[ind]!=0 && arr[ind+1]%x==0){
                    st.erase(ind+1);
                }
                else if(arr[ind+1]%arr[ind]==0 && arr[ind+1]%x!=0){
                    st.insert(ind+1);
                }
            }
            arr[ind] = x;
        }
        else{
            ll ind;cin>>ind;
            --ind;
            auto it = st.lower_bound(ind);
            if(*it==ind){
                cout << *it+1 << endl;
            }
            else{
                cout << *(--it)+1 << endl;
            }
        }
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
	//cin>>t;
	while(t--){
		solve();
	}
}
