//https://atcoder.jp/contests/abc158/tasks/abc158_e
//https://atcoder.jp/contests/abc164/tasks/abc164_d


/*
*   -------------- ?*?*? --------------
* |         In The Name of *Allah*     |
* |             Author : Tarik         |
* |                                    |
*  -------------- ?*?*? ---------------
*/
 
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define  pb        push_back
#define  all(v)    v.begin(),v.end()
#define  endl       '\n'  
#define  uint       long long
#define  int        long long
#define  fastio    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) 
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set; 

const int mxn=1e6+123;
int a[mxn],suffix[mxn];
void solve(){
	int n,mod;
	cin>>n>>mod;
	string s;
	cin>>s;
	if(mod==2 || mod==5){
		int ans=0;
		for(int i=0;i<n;i++){
			int x=s[i]-'0';
			if(x%mod==0){
				ans+=(i+1);
			}
		}
		cout<<ans<<endl;
		return;
	}
	int pw=1,ans=0;
	map<int,int>mp;
	mp[0]=1;
	for(int i=s.size()-1;i>=0;i--){
		suffix[i]=suffix[i+1]+(s[i]-'0')*pw;
        suffix[i]%=mod;
        ans+=mp[suffix[i]];
        mp[suffix[i]]++;
        pw=(pw*10)%mod;
	}
	cout<<ans<<endl;
	

}
signed main(){ 
    fastio; 
    int t=1;
    //cin>>t;
    while(t--){
       solve();
    }
}
