#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main() {
	ll t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<ll> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    vector<ll> ans;
	    vector<ll> sol;
	    if(v.size()==2){
	        cout<<(gcd(v[0],v[1]) + v[0] )<<endl;
	    }
	    else{
	        for(ll i=0;i<v.size()-1;i++){
	            for(ll j=i+1;j<v.size();j++){
	                ans.push_back(gcd(v[i],v[j]));
	                sol.push_back(j);
	            }
	        }
	        ll mini=INT_MAX,index=-1;;
	        for(ll i=0;i<ans.size();i++){
	           if(ans[i]<mini){
	               mini=ans[i];
	               index=i;
	           }
	        }
	       // vector<ll> temp = v;
	        ll val=sol[index];
	       // temp[val]=mini;
	        ll sum=0;
	        for(int ll i=0;i<v.size();i++){
	            if(i==val){
	                sum+=mini;
	            }
	            else{
	                sum+=v[i];
	            }
	            
	        }
	        cout<<sum<<endl;
	    }
	}
	return 0;
}
